#include <stdio.h>
#include <string.h>


int main(int argc, char*argv[]) {
	int x, y, ris;
	scanf("%d %d", &x, &y)
	
	ria = coprimi(x , y);
	return 0 ;
}

int coprimi(int a, int b){
	int min, ris, i;
	
	if (a == 1 || b == 1){
		ris = 1;
	}	else if ( a == 0 || b == 0){
		ris = 0;
		}	else if (a < b){
				mi = a;
			}	else{
				min = b;
				
				ris = 1;
				if ((a % 2 == 0) && (b % 2 == 0)){
					ris = 1;
				}	else{
					for (i = 3; i <= min; i+2){
						if (a % i == 0 && b % i == 0){
							ris = 0;
						}
					}
				}
			}
	return ris;
}
				
