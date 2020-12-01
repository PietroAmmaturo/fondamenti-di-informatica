#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

/**/
int main(int argc, char * argv[]){

	int arr[MAX_LEN], dim_arr, dim_arr1, k, s, i, j, ris;
	
	i = 0;
	scanf("%d", &arr[i]);
	while (arr[i] > 0 && i < MAX_LEN){
		i++;
		scanf("%d", &arr[i]);
		}
		
	do
	scanf("%d", &k);
	while (k <= 0);
	dim_arr = i;
	dim_arr1 = dim_arr-1;
	ris = 0;
	for(i = 0; i < dim_arr1 && !ris; i++)
		for(j = i + 1; j < dim_arr && !ris; j++){
			s = arr[i] + arr[j];
			if (s == k)
				ris = 1;
		}
		
		printf("%d", ris);
	return 0;
}

