#ifndef VECTOR_INCLUDED
#define VECTOR_INCLUDED

#include <stddef.h>

#define	DEFAULT_CAPACITY	12
#define NOT_FOUND			(size_t)(-1)
typedef int DataType;

typedef struct tagVector {
	DataType* pdata;
	size_t size;
	size_t capacity;
}*HVector;

HVector createVector(void);
HVector createVectorWithCapacity(size_t capacity);
HVector createVectorWithArray(const DataType* p, size_t size);
HVector createVectorWithValue(size_t size, DataType val);

void destroyVector(HVector hvec);

_Bool getElemRef(HVector hvec, size_t idx, DataType* p); //Access an item by reference
DataType getElemVal(HVector hvec, size_t idx); //Access an item by value

_Bool reserve(HVector hvec, size_t newcap); //Sets capacity
_Bool pushBack(HVector hvec, DataType val); //Adds item to vector from end side
_Bool popBack(HVector hvec); //Deletes item from end side
_Bool insert(HVector hvec, size_t idx, DataType val); //Inserts item to any position
_Bool erase(HVector hvec, size_t idx); //Erases item from any position
_Bool removeElem(HVector hvec, DataType val); //Erases a certain item with value
size_t removeElems(HVector hvec, DataType val); //Erases all items
size_t findElem(HVector hvec, DataType val); //Gets certain item
void shrinkToFit(HVector hvec); 
void Clear(HVector hvec); //Sets the size to zero

//functional macro definitions
#define	getSize(handle)			(handle->size)
#define getCapacity(handle)		(handle->capacity)
#define getElem(handle, idx)	(handle-> pdata[idx])

#endif
