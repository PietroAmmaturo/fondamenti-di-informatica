#include <stdio.h>
#include <string.h>
#define NAME_LEN 50
#define OP_NUM 10
/*vedere quale tra 10 compagnie è la migliore per luce e gas dato il consumo dell' utente amountG, amountE e il costo per unita*/
typedef struct {
	char name[NAME_LEN + 1];
	float costEU;
	float costGU;
}operator_t

int main(int argc, char * argv[]){
	
	int validCompanies, willInsert, bestCompany, i;
	float amountE, amountG, minCost, cost;
	operator_t companies[OP_NUM];
	
	validCompanies = 0;
	scanf("%d", &willInsert);
	while(willInsert && validCompanies < OP_NUM){
		scanf("%s", companies[validCompanies].name);
		scanf("%f", &companies[validCompanies].costEU);
		scanf("%f", &companies[validCompanies].costGU);
	validCompanies++;
	scanf("%f", &willInsert);		
	}	
	scanf("%f", &amountE);
	scanf("%f", &amountG);
				
	bestCompany = 0;
	minCost = companies[bestCompany].costEU * amountE +
				companies[bestCompany].costGU * amountG;
	for (i = 0; i < validCompanies; i++){
		cost = companies[i].costEU * amountE +
				companies[i].costGU * amountG;
		if (cost < minCost) {
			minCost = cost;
			bestCompany = i;
		}
	}
	
	printf("%d\n", companies[bestCompany].name);
	
	return 0;
}

