
#include <stdlib.h>

#include "cdsll.h"

int cdsll_create(cdsll_t** llp)
{
	cdsll_t* ll = *llp;
	ll = (cdsll_t*)malloc(sizeof(cdsll_t));
	return 1;
bad:
	return -1;
}
