#include <stdio.h>

int main() {
    // BISPO: Diagonal superior direita (Cima + Direita)
    printf("Movimentos do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // TORRE: Direita
    printf("\nMovimentos da Torre:\n");
    int j = 0;
    while (j < 5) {
        printf("Direita\n");
        j++;
    }

    // RAINHA: Esquerda
    printf("\nMovimentos da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}
