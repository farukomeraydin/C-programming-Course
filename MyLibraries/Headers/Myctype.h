#ifndef MYCTYPE_INCLUDED
#define MYCTYPE_INCLUDED

extern const unsigned int _myc[];

#define  UPPER		1
#define  LOWER		2
#define  DIGIT		4
#define  XDIGIT		8
#define  SPACE		16
#define  PUNCT		32
#define  PRINT		64
#define  CONTROL	128


#define   is_upper(c)    (_myc[(c)] & UPPER)
#define   is_lower(c)    (_myc[(c)] & LOWER)
#define   is_alpha(c)    (_myc[(c)] & (UPPER | LOWER))
#define   is_alnum(c)    (_myc[(c)] & (UPPER | LOWER | DIGIT))

#define   is_digit(c)    (_myc[(c)] & (DIGIT))
#define   is_xdigit(c)    (_myc[(c)] & (XDIGIT))
#define   is_space(c)    (_myc[(c)] & (SPACE))
#define   is_punct(c)    (_myc[(c)] & (PUNCT))

#endif