#include <stdio.h>
#define BASE 10
/*acquisisce 1 intero e ne fa il fattoriale*/
int main(int argc, char*argv[]) {

	int val, ris, i;

	do
	scanf("%d", &val);
	while (val < 0);

	ris = 1;
	for(i = 2; i < val; i++)
		ris = ris * i;

	printf("%d\n", ris);
	return 0;

}
