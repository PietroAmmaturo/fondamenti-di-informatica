#include <stdio.h>
#define BASE 10
/*acquisisce 1 intero positivo o nullo, scrivere un programma che lo riscriva al contrario */
int main(int argc, char*argv[]) {
	
	int val, tmp, num;
	
	scanf("%d", &val);
	
	tmp = val;
	num= 0;
	
	/*
	se è strettamente positivo questo è meglio
	do{
	num = (num * BASE) + tmp % BASE;
	tmp = tmp / BASE;
	}while (tmp > 0);
		*/

	while (tmp > 0){
	num = (num * BASE) + tmp % BASE;
	tmp = tmp / BASE;
	}

	
	printf("%d\n", num);
	return 0;

}

