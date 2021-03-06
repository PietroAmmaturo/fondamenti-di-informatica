/*sottoprogramma distanza, ricevuti in ingresso due array di interi di egual lunghezza, un array di pesi, della stessa lunghezza, e qualsiasi altro parametro, calcola e trasmette la distanza euclidea e la distanza euclidea pesata. le formule per il calcolo sono;
d=rad(sum(i=1,n)(|Ui-Vi|^2))
dp=rad(sum(i=1,n)(Pi^(|Ui-Vi|^2)))
*/

#include <stdio.h>
#include <math.h>

void distanza(int u[], int v[], float p[], dim, float * dist, float * distp){
	int dist, diffp, differenza, prodotto;
	dist = 0;
	diffp = 0;
	if (p[0] != NULL){
		for (i = 0; i < dim; i++){
			differenza = u[i] - v[i]n;
			prodotto = p[i] * differenza * differenza;
			diffp = diffp + prodottopes;
		}
		*distp = sqrt(diffp);
	} else {
		for (i = 0; i < dim; i++){
			differenza = u[i] - v[i]n;
			prodotto = differenza * differenza;
			dist = dist + prodotto;
		}
		*dist = sqrt(dist);
	}
}
