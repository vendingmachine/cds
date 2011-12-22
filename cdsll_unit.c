
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "cdsll.h"

int test_create_delete(cdsll_t** llp)
{
	//
	int rc = -1;
	*llp = NULL;
	rc = cdsll_create(llp);
	if(rc != 0) {
		goto badcreate1;
	}
	cdsll_t* ll = *llp;
	if(ll == NULL) {
		goto badcreate2;
	}

	//
	size_t llsz = sizeof(ll);
	printf("sizeof new ll %d\n", llsz);
	printf("ll %u\n", ll);

	//
	rc = cdsll_delete(&ll);
	if(rc != 0) {
		goto baddelete1;
	}
	if(ll != NULL) {
		goto baddelete2;
	}
	return 1;
badcreate1:
	return -1;
badcreate2:
	return -2;
baddelete1:
	return -3;
baddelete2:
	return -4;
}

int main(void)
{
	int rc = 0;
	cdsll_t* ll = NULL;
	rc = test_create_delete(&ll);
	printf("test_create_delete %i\n", rc);
	assert(rc == 1);
	return 0;
}

