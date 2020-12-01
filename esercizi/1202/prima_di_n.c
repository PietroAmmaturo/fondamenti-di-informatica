
#include <stdio.h>
#include <stdlib.h>

int beforeN(elem_t * h, int n){
	if (h == NULL)
		return -1;
	if (h->info == n)
		return 1;
	if (beforeN(h->next, n) > -1)
		return 1 + beforeN(h->next, n);
	else
		return -1;
}
