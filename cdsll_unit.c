
#include <stdlib.h>

#include "cdsll.h"

int test_create(cdsll_t** llp)
{
	cdsll_create(llp);
	cdsll_t* ll = *llp;
	if(ll == NULL) {
		goto bad;
	}
	return 1;
bad:
	return -1;
}

int main(void)
{
	int rc = 0;
	cdsll_t* ll;
	rc = test_create(&ll);
	return rc;
}
