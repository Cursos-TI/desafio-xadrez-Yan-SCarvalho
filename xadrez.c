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
    
    // CAVALO 
    
    printf("\nMovimento do Cavalo:\n");

    // Mover 2 casas para baixo (usando while)
    int J = 0;
    while (J < 2) {
        printf("Baixo\n");
        J++;
    }

    // Mover 1 casa para a esquerda (usando for)
    for (int k = 0; k < 1; k++) {
        printf("Esquerda\n");
    }


    return 0;
}

