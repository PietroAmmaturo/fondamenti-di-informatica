#include <stdio.h>
int main(int argc, char*argv[]) {
	
	float si, s, t, sd; //saldo iniziale, saldo, tasso, saldo desiderato
	int a;
	
	do
	if(scanf("%f", &s)){}
	while (s <= 0);
	do
	if(scanf("%f", &t)){}
	while (t <= 0);
	if(scanf("%f", &sd)){}
	while (sd <= 0);
	s = si;
	a = 0;
	while(s < sd){
		s = s + (s * tx);
		a++;
		}
	
	printf("%d\n %f\n", a, s);
	
	return 0;
}
