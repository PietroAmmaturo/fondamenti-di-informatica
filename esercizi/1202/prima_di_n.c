
#include <stdio.h>
#include <stdlib.h>

int beforeN(elem_t * h, int n){
	int tmp;
	if (h == NULL)
		return -1;
	if (h->info == n)
		return 0;
	if ((tmp = beforeN(h->next, n)) != -1)
		return 1 + tmp;
	else
		return -1;
}
