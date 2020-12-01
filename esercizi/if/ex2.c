#include <stdio.h>

int main (int argc, char * argv[]){
	float a, b, c;
	int ret;
	
	if(scanf("%f %f %f", &a, &b, &c)){};

	if (a>0 && b>0 && c>0)
	if (
	(a*a == b*b + c*c) ||
	(b*b == a*a + c*c) ||
	(c*c == b*b + a*a))
	ret=1;
	else
	ret=0;
	else
	ret=0;
	
	printf("%d\n" , ret);
	return 0;
	
}

