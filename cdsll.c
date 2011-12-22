
#include <stdlib.h>

#include "cdsll.h"

int cdsll_create(cdsll_t** llp)
{
	*llp = (cdsll_t*)malloc(sizeof(cdsll_t));
	return 0;
bad:
	return -1;
}

int cdsll_delete(cdsll_t** llp)
{
	free(*llp);
	*llp = NULL;
	return 0;
bad:
	return -1;
}
