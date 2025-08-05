#include <stdio.h>

// Função recursiva para o Bispo
void moverBispo(int i, int j) {
    if (i >= 5) return;

    if (j == 0) {
        printf("Cima\n");
        moverBispo(i, 1);  // Próximo passo: Direita
    } else {
        printf("Direita\n");
        moverBispo(i + 1, 0);  // Próxima iteração
    }
}

// Função recursiva para a Torre
void moverTorre(int j) {
    if (j >= 5) return;

    printf("Direita\n");
    moverTorre(j + 1);
}

// Função recursiva para a Rainha
void moverRainha(int k) {
    if (k >= 8) return;

    printf("Esquerda\n");
    moverRainha(k + 1);
}

// Loop complexo para o Cavalo
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");

    int i = 0, j = 2;
    for (; i < 3 && j >= 0; i++, j--) {
        if (i % 2 == 0 && j % 2 == 0) {
            printf("Cima\n");
        } else if (i % 2 == 1 && j % 2 == 1) {
            printf("Baixo\n");
        } else {
            printf("Direita\n");
        }
    }
}

int main() {
    printf("Movimentos do Bispo:\n");
    moverBispo(0, 0);

    printf("\nMovimentos da Torre:\n");
    moverTorre(0);

    printf("\nMovimentos da Rainha:\n");
    moverRainha(0);

    moverCavalo();

    return 0;
}
