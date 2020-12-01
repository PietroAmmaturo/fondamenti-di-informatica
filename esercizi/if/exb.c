#include <stdio.h>
int main(int argc, char*argv) {
	int val;
	char sym;
	
	scanf("%d", &val);
	if (val<0)
	sym = '-';
	else if(val > 0)
			sym = '+';
		else
			sym = ' ';
	printf("%c\n", sym);	
   return 0;
}
