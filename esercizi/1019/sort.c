#include <stdio.h>
#include <string.h>
#define DIM_ARR 100
/*ordinamento*/
int main(int argc, char * argv[]){
	
	int i, j, dimArr, posMin;
	float arr[DIM_ARR];
	
	dimArr = DIM_ARR;
	i = 0;
	j = 0;
	
	for (i = 0; i < dimArr - 1; i++){
		posMin = i;
		for( j = i + 1; j < dimArr; j++)
			if (arr[j] < arr[posMin])
				posMin = j;
		tmp = arr[i];
		arr[i] = arr[posMin];
		arr[posMin] = tmp;
	}
	
	return 0;
}

