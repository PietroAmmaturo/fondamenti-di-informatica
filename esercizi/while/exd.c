#include <stdio.h>
#define BASE 3
int main(int argc, char*argv[]) {

	int val;
	int ris1, ris2 = 0;
	int n1, n2;
	int i = 1;
	
	do
	if(scanf("%d", &val)){}
	while(val < 0);

	n2 = n1 = val;
	
	/*visualize*/
	while (n1!=0){
	ris1 =((n1 % BASE));
	n1 = n1 / BASE;
	printf("%d", ris1);
	}
	
	/*save and visualize*/
	while (n2 > 0){
		ris2 = (n2 % BASE) * i + ris2;
		n2 = n2 / BASE;
		i = i*10;
	}
	
	printf("\n%d", ris2);
	
	return 0;
}
