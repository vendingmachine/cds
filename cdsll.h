

#ifndef CDSLL_H
#define CDSLL_H

typedef struct cdsll_struct {
	struct cdsll_struct* next;
} cdsll_t;

int cdsll_create(cdsll_t** llp);

#endif
