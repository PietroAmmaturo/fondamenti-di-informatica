#include <stdio.h>
int isprime(int);
#define STOP 0
#define NMAX 50
int main(int argc, char * argv[])
{
	int val[NMAX], i;
	int num, dim;
	int senzaprimi;

	dim = 0;
	scanf("%d", &num);
	while(num > STOP){
		val[dim] = num;
		dim++;
		scanf("%d", &num);
	}
	senzaprimi = 1;
	for(i = 0; i < dim && senzaprimi; i++){
		if(isprime(val[i]))
			senzaprimi = 0;
	}
	printf("%d\n", senzaprimi);
	return 0;
}

int isprime(int num)
	{
	int isprimo;
	int i, meta;

	if((num % 2 == 0 && num != 2) || num == 1)
		isprimo = 0;
	else{
		meta = num / 2;
		isprimo = 1;
	for(i = 3; i <= meta && isprimo; i = i+2)
		if(num % i == 0)
			isprimo = 0;
	}
	return isprimo;
}

