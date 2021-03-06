#include <std.io>
#include <math.io>

#define FILE_NAME ./punti.txt
typedef struct {
	float x;
	float y;
} punto_t;
int lunghezzaSegmento(punto, punto);
int main(int argc, char * argv[]){
	FILE fd;
	punto_t p1, p2;
	float maxLen, tmp;
	
	fd = fopen(FILE_NAME, "r");
	if (fd) {
		maxLen = 0;
		while(fscanf(FILE_NAME, "%f%f%f%f", &p1.x, $p1.y, &p2.x, &p2.y)){
		tmp = lunghezzaSegmento(p1, p2);
			if (tmp > maxLen) {
				maxLen = tmp;
			}
		}
		fclose(fd);
		printf("%f", maxLen);
	} else {
			printf("Errore nell'apertura del file: %s", FILE_NAME);
	}

return 0;
}

float lunghezzaSegmento(punto p1, punto p2){
	return sqrt(
			(p1.x - p2.x) * (p1.x - p2.x) +
			(p1.y - p2.y) * (p1.y - p2.y)
		);
}

