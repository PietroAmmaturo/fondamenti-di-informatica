#include <stdio.h>
int main(int argc, char*argv[]) {
	
	int val;
	int quad;
	int radice;
	
	do
	if(scanf("%d", &val)){}
	while (val <= 0);
	
	radice = 1;
	quad = radice * radice;
	while(quad <= val){
		radice++;
		quad =  radice * radice;
	}
	
	radice--;
	
	printf("%d\n", radice);
	
	return 0;
}
