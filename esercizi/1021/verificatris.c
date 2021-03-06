#include <stdio.h>
#define STR_LEN 9
#define TRIS_LEN 3

int main(int argc, char * argv[]) {
	char testo[STR_LEN + 1];
	char board[TRIS_LEN][TRIS_LEN];
  int tris, i, j, possibleTris;
 	char curChar;

    scanf("%s", testo);

    for(i = 0; i < TRIS_LEN; i++) {
        for(j = 0; j < TRIS_LEN; j++) {
            board[i][j] = testo[i * TRIS_LEN + j];
        }
    }

    tris = 0;

    /* Controllo tutte le righe (o fino a quando trovo un tris) */
    for(i = 0; i < TRIS_LEN && tris == 0; i++) {

        /* Per ogni riga controllo che i valori successivi al primo siano uguali al primo,
         * mi fermo appena ne trovo uno diverso
         * */
        curChar = board[i][0];
        possibleTris = 1;
        for (j = 1; j < TRIS_LEN && possibleTris == 1; j++) {
            if (board[i][j] != curChar) {
                possibleTris = 0;
            }
        }

        tris = possibleTris;
    }

    /* Stesso controllo, ma sulle colonne */
    for(i = 0; i < TRIS_LEN && tris == 0; i++) {
        curChar = board[0][i];
        possibleTris = 1;
        for (j = 1; j < TRIS_LEN && possibleTris == 1; j++) {
            if (board[j][i] != curChar) {
                possibleTris = 0;
            }
        }

        tris = possibleTris;
    }

    /* Controllo la prima diagonale solo se non ho già trovato un tris */
    if (tris == 0) {
        curChar = board[0][0];
        possibleTris = 1;
        for (i = 1; i < TRIS_LEN && possibleTris == 1; i++) {
            if (board[i][i] != curChar) {
                possibleTris = 0;
            }
        }
        tris = possibleTris;
    }

    /* Controllo la prima diagonale solo se non ho già trovato un tris */
    if (tris == 0) {
        curChar = board[0][TRIS_LEN - 1];
        possibleTris = 1;
        for (i = 1; i < TRIS_LEN && possibleTris == 1; i++) {
            if (board[i][TRIS_LEN - 1 - i] != curChar) {
                possibleTris = 0;
            }
        }
        tris = possibleTris;
    }

    printf("%d\n", tris);
    return 0;
}
