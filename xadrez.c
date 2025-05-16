#include <stdio.h>

int main() {
    printf("=== SIMULAÇÃO DE MOVIMENTOS NO XADREZ ===\n\n");

    // 1. Movimento da Torre (5 casas para a direita) - usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimento do Bispo (5 casas na diagonal superior direita) - usando WHILE
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    int contador_bispo = 1;
    while(contador_bispo <= 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // 3. Movimento da Rainha (8 casas para a esquerda) - usando DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while(contador_rainha <= 8);
    printf("\n");

    // 4. Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) - usando loops aninhados
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    
    // Loop externo (for) para controlar as duas partes do movimento em L
    for(int parte = 1; parte <= 2; parte++) {
        if(parte == 1) {
            // Primeira parte do L: 2 movimentos para baixo
            int movimentos_baixo = 0;
            while(movimentos_baixo < 2) {  // Loop interno (while) para os movimentos para baixo
                printf("Baixo\n");
                movimentos_baixo++;
            }
        } else {
            // Segunda parte do L: 1 movimento para a esquerda
            printf("Esquerda\n");
        }
    }

    return 0;
}
