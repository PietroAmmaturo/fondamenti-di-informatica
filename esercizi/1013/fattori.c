#include <stdio.h>

int main(int argc, char*argv[]) {
	
	int a, b, ris;
	
	scanf("%d %d", &a, &b);
	
	if(b != 0){
		if(a % b == 0){
			ris = 1;
		}else if(b % a == 0){
				ris = 1;
			}else
				ris = 0;
	}else
		ris = 1;
	
	printf("%d\n", ris);
	
	return 0;

}

