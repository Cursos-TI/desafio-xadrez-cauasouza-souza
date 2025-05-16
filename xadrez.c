#include <stdio.h>

int main() {
    printf("=== SIMULAÇÃO DE MOVIMENTOS NO XADREZ ===\n\n");

    // 1. Movimento da Torre (5 casas para a direita) - usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(int i = 1; i <= 5; i++) {
        printf("Direita\n"); // Torre se move em linha reta
    }
    printf("\n");

    // 2. Movimento do Bispo (5 casas na diagonal superior direita) - usando WHILE
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    int contador_bispo = 1;
    while(contador_bispo <= 5) {
        printf("Cima, Direita\n"); // Bispo se move na diagonal
        contador_bispo++;
    }
    printf("\n");

    // 3. Movimento da Rainha (8 casas para a esquerda) - usando DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n"); // Rainha se move em linha reta (como a torre)
        contador_rainha++;
    } while(contador_rainha <= 8);

    return 0;
}