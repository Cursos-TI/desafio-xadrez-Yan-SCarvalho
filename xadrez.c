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
    
    // CAVALO: CIMA CIMA DIREITA OU CIMA CIMA ESQUERDA
    
    char lado;

    printf("\nMovimentos do cavalo:\n");

    printf("\nPara qual lado você deseja mover o cavalo? (d = Direita, e = esquerda): \n");

    scanf("%c" , &lado);

    if(lado == 'd' || lado == 'D'){
        printf("Você escolheu mover para a direita.\n");
        // CAVALO: 2 para cima 1 para direita
    
    for (int c = 0; c < 2; c++) {
        printf("Cima\n");
    }
    printf("Direita\n");

    } else if (lado == 'e' || lado == 'E'){
        printf("Você escolheu mover para a esquerda.\n");
        // CAVALO: 2 para cima 1 para a Esquerda
    
    for (int c = 0; c < 2; c++) {
        printf("Cima\n");
    }
    printf("Esquerda\n");

    }else {
        printf("Opção inválida. \n");
    }
     

    return 0;


    
}
