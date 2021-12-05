#include "vector.h"
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>	

#define	PUBLIC
#define PRIVATE	static

PRIVATE HVector create_vector_capacity(size_t capacity);


PUBLIC HVector createVector(void) {
	return create_vector_capacity(DEFAULT_CAPACITY);
}

PUBLIC HVector createVectorWithCapacity(size_t capacity) {
	return create_vector_capacity(capacity);
}

PUBLIC HVector createVectorWithArray(const DataType* p, size_t size) {
	HVector hvec = create_vector_capacity(size);
	if (!hvec)
		return NULL;

	hvec->size = size;
	for (size_t i = 0; i < hvec->size; ++i)
		hvec->pdata[i] = p[i];

	return hvec;
}

PUBLIC HVector createVectorWithValue(size_t size, DataType val) {
	HVector hvec = create_vector_capacity(size);
	if (!hvec)
		return NULL;

	hvec->size = size;

	for (size_t i = 0; i < hvec->size; ++i)
		hvec->pdata[i] = val;

	return hvec;

}

PUBLIC bool reserve(HVector hvec, size_t newcap) {
	if (newcap < hvec->size)
		return false;

	DataType* pd = (DataType*)realloc(hvec->pdata, newcap * sizeof(DataType));
	if (!pd)
		return false;

	hvec->pdata = pd;
	hvec->capacity = newcap;

	return hvec;
}


PUBLIC bool pushBack(HVector hvec, DataType val) {
	if (hvec->size == hvec->capacity && !reserve(hvec, hvec->capacity * 2))
		return false;

	hvec->pdata[hvec->size] = val;
	++hvec->size;
	return true;
}

PUBLIC bool popBack(HVector hvec) {
	if (hvec->size == 0)
		return false;

	--hvec->size;
	return true;
}

PUBLIC bool insert(HVector hvec, size_t idx, DataType val) {
	if (hvec->size == hvec->capacity && !reserve(hvec, hvec->capacity * 2))
		return false;

	memmove(hvec->pdata + idx + 1, hvec->pdata + idx, (hvec->size - idx) * sizeof(DataType));
	hvec->pdata[idx] = val;
	++hvec->size;
	return true;
}

PUBLIC bool erase(HVector hvec, size_t idx) {
	if (idx >= hvec->size)
		return false;

	memmove(hvec->pdata + idx, hvec->pdata + idx + 1, (hvec->size - idx - 1) * sizeof(DataType));
	--hvec->size;

	return true;
}

size_t findElem(HVector hvec, DataType val) {
	for (size_t i = 0; i < hvec->size; ++i)
		if (hvec->pdata[i] == val)
			return i;
	
	return NOT_FOUND;
}

PUBLIC bool removeElem(HVector hvec, DataType val) {
	size_t idx = findElem(hvec, val);
	if (idx == NOT_FOUND)
		return false;

	erase(hvec, idx);
	return true;
}

size_t removeElems(HVector hvec, DataType val) {
	size_t write_idx = 0;
	for (size_t i = 0; i < hvec->size; ++i)
		if (hvec->pdata[i] != val)
			hvec->pdata[write_idx++] = hvec->pdata[i];

	size_t n_removed = hvec->size - write_idx;
	hvec->size = write_idx;
	return n_removed;
}

PUBLIC void shrinkToFit(HVector hvec) {
	hvec->capacity = hvec->size;
}

PUBLIC void Clear(HVector hvec) {
	hvec->size = 0;
}

PUBLIC void destroyVector(HVector hvec) {
	free(hvec->pdata);
	free(hvec);
}

PUBLIC bool getElemRef(HVector hvec, size_t idx, DataType* p) {
	if (idx >= hvec->size)
		return false;

	*p = hvec->pdata[idx];
}

PUBLIC DataType getElemVal(HVector hvec, size_t idx) {
	return hvec->pdata[idx];
}

static HVector create_vector_capacity(size_t capacity) {
	HVector hvec = (HVector)malloc(sizeof(*hvec));
	if (!hvec) 
		return NULL;

	if ((hvec->pdata = (DataType*)malloc(capacity * sizeof(DataType))) == NULL) {
		free(hvec);
		return NULL;
	}
	hvec->capacity = capacity;
	hvec->size = 0;

	return hvec;
}