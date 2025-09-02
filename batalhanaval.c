#include <stdio.h>

int main(){

    int tabuleiro [10][10]; // variavel do tabuleiro // primeiro 10 vale para linha e segunda 10 para colunas

for (int i = 0; i <10; i++){
    for (int j = 0; j <10; j++){ // tabuleiro
        tabuleiro [i][j] = 0;}
}
for (int i = 0; i < 3; i++){ // navio vertical
    tabuleiro[i][1] = 3;
}
for (int j = 7; j < 10; j++){ // navio horizontal
    tabuleiro [7][j] = 3;
}
// navio diagonal esquerda → direita
    tabuleiro[7][1] = 3;
    tabuleiro[6][2] = 3;
    tabuleiro[5][3] = 3;

    // navio diagonal direita → esquerda
    tabuleiro[4][8] = 3;
    tabuleiro[3][7] = 3;
    tabuleiro[2][6] = 3;

for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){

            // usando if para cada coordenada - CONE
            if ((i == 6 && j == 5) || 
                (i == 7 && j == 4) || (i == 7 && j == 5) || (i == 7 && j == 6) ||
                (i == 8 && j == 3) || (i == 8 && j == 4) || (i == 8 && j == 5) || (i == 8 && j == 6) || (i == 8 && j == 7)) {
                tabuleiro[i][j] = 5;
            }
        }
    }
for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){

            // usando if para coordenada - CRUZ
            if ((i == 0 && j == 4)||
                (i == 1 && j == 2)|| (i == 1 && j == 3)|| (i == 1 && j == 4)|| (i == 1 && j == 5)|| (i == 1 && j == 6)||
                (i == 2 && j == 4)) {
                    tabuleiro [i][j] = 5;
                }
        }
    }
for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){

            // usando if para coordenada - OCTAEDRO
            if ((i == 2 && j == 5)||
                (i == 3 && j == 4)|| (i == 3 && j == 5)|| (i == 3 && j == 6)||
                (i == 4 && j == 5)){
                    tabuleiro [i][j] = 5;
                }
        }
    }



    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);  // imprimindo tabuleiro
        }
            printf("\n");
    }



    return 0;
}