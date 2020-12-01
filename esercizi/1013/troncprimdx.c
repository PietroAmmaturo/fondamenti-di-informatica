#include <stdio.h>
#define BASE 10
int main(int argc, char*argv[]) {
	
	int num, tmp, ris, i, half;
	
	do
	scanf("%d", &num);
	while (num <= 0);
	
	tmp=num;
	ris = 1;
	while(tmp > 0 && ris == 1){
		if((tmp % 2 != 0 || tmp == 2) && (tmp != 1)){
			half = tmp / 2;
			for(i = 3; i < half; i = i + 2)
				if(tmp % i == 0)
					ris = 0;
		}
		else
			ris = 0;
		tmp = tmp / BASE;
	}
	
	printf("%d", ris);
	return 0;

}


