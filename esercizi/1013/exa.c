#include <stdio.h>
/* minimo e massimo*/
int main(int argc, char*argv[]) {
	int min , max ;
	int val , cont , tot ;
	float avg ;
	scanf ("%d" , &val ) ;
	min = val;
	max = val;
	cont = 1 ;
	tot = 0;
	scanf ("%d" , &val ) ;
	while ( val != 20 ) {
		if ( val < min )
			min = val ;
		else if ( val > max )
			max = val ;
		tot = tot + val ;
		cont++;
		scanf ("%d" , &val ) ;
	}
	avg = (float)tot / cont ;
	printf ("%d %d %f \n" , min , max , avg );
	return 0 ;
}

