#include <stdio.h>
int main(int argc, char*argv[]) {
	
	int a, b, tmp, out;
	int e;
	
	do
	if(scanf("%d", &a)){}
	while (a <= 0);
	do
	if(scanf("%d", &b)){}
	while (b <= 0);
	
	if(a==1 && b !=1)
	out = -1;
	else{
		tmp = 1;
		e = 0;
		while(tmp < b){
			e++;
			tmp = tmp * a;
		}
		out = e;
	}
	if(tmp != b)
	out = -1;
	
	printf("%d\n", out);
	
	return 0;
}
