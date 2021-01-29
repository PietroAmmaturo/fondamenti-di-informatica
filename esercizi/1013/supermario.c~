#include <stdio.h>
#define MAXH 16
int main(int argc, char*argv[]) {
	
	int h, i, j;
	
	do
	scanf("%d", &h);
	while (h <= 0 || h > MAXH);
	
	for(i = 1; i <= h; i++){
		for(j = h; j > i; j--)
			printf(" ");
		for(j = 0; j < i; j++)
			printf("#");
		printf("  ");
		for(j = 0; j < i; j++)
			printf("#");
		printf("\n");
	}
	
	return 0;

}

