#include <stdio.h>
#define BASE 10
/*acquisisce 2 interi positivi o nulli, eleva il primo al secondo*/
int main(int argc, char*argv[]) {
	
	int x, y, ris;
	
	scanf("%d %d", &x, &y);
	

	if (y >= 0){
		ris = 1;
		for(i = 0; i < y; i++)
			ris = ris * x;
		}
	else
	ris = -1;
	
		
	printf("%d\n", ris);
	return 0;

}

