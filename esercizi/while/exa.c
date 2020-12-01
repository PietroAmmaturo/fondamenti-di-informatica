#include <stdio.h>
int main(int argc, char*argv[]) {
	int fine, val, max, min, tot, count=0;
	float avg;
	if(scanf("%d", &fine)){}
	if(scanf("%d", &val)){}
	min = max = tot = val;
	if(scanf("%d", &val)){}
	while (val != fine){
		if (val < min)
			min = val;
			else if (val > max)
				max = val;
		count++;
		tot += val;
		if(scanf("%d", &val)){}
		}
	avg = (float)tot / count;
	printf("%d %d %f\n", min, max, avg);
	
   return 0;
}
