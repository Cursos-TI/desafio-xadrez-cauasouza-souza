#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento complexo do Cavalo
void moverCavalo() {
    // Loop externo controla as partes do movimento em L
    for (int parte = 1; parte <= 2; parte++) {
        // Primeira parte: 2 movimentos para cima
        if (parte == 1) {
            int movimentos_cima = 0;
            while (1) { // Loop infinito controlado por break
                if (movimentos_cima >= 2) break;
                printf("Cima\n");
                movimentos_cima++;
            }
        } 
        // Segunda parte: 1 movimento para direita
        else {
            printf("Direita\n");
        }
    }
}

// Função alternativa para o Bispo usando loops aninhados
void moverBispoLoops() {
    // Loop externo para movimento vertical
    for (int vertical = 1; vertical <= 5; vertical++) {
        // Loop interno para movimento horizontal
        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    printf("=== SIMULAÇÃO AVANÇADA DE MOVIMENTOS NO XADREZ ===\n\n");

    // 1. Movimento da Torre (recursivo) - 5 casas para direita
    printf("Movimento da Torre (5 casas para direita - recursivo):\n");
    moverTorre(5);
    printf("\n");

    // 2. Movimento do Bispo (recursivo) - 5 casas na diagonal
    printf("Movimento do Bispo (5 casas na diagonal - recursivo):\n");
    moverBispo(5);
    printf("\n");

    // 3. Movimento da Rainha (recursivo) - 8 casas para esquerda
    printf("Movimento da Rainha (8 casas para esquerda - recursivo):\n");
    moverRainha(8);
    printf("\n");

    // 4. Movimento do Cavalo (loops complexos) - 2 cima, 1 direita
    printf("Movimento do Cavalo (2 casas para cima e 1 para direita - loops complexos):\n");
    moverCavalo();
    printf("\n");

    // 5. Movimento alternativo do Bispo (loops aninhados)
    printf("Movimento do Bispo (5 casas na diagonal - loops aninhados):\n");
    moverBispoLoops();

    return 0;
}
