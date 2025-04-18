#include <stdio.h>

// Constantes para número de movimentos
#define BISPO_MOVIMENTOS 5
#define TORRE_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8
#define CAVALO_MOVIMENTOS 2 // Número de movimentos para cada direção no formato "L"

// Função para movimentar o Bispo
void moverBispo() {
    printf("Movendo Bispo:\n");
    for (int i = 1; i <= BISPO_MOVIMENTOS; i++) {
        printf("Diagonal Superior Direita - Movimento %d\n", i);
    }
}

// Função para movimentar a Torre
void moverTorre() {
    printf("Movendo Torre:\n");
    for (int i = 1; i <= TORRE_MOVIMENTOS; i++) {
        printf("Direita - Movimento %d\n", i);
    }
}

// Função para movimentar a Rainha
void moverRainha() {
    printf("Movendo Rainha:\n");
    for (int i = 1; i <= RAINHA_MOVIMENTOS; i++) {
        printf("Esquerda - Movimento %d\n", i);
    }
}

// Função para movimentar o Cavalo
void moverCavalo() {
    printf("Movendo Cavalo em L:\n");
    for (int i = 1; i <= CAVALO_MOVIMENTOS; i++) {
        printf("Baixo - Movimento %d\n", i);
        int movimentosL = 0;
        while (movimentosL < CAVALO_MOVIMENTOS) {
            printf("Esquerda - Movimento %d\n", movimentosL + 1);
            movimentosL++;
        }
    }
}

int main() {
    printf("Início da movimentação das peças do jogo:\n\n");

    moverBispo();
    printf("\n"); // Separação visual
    moverTorre();
    printf("\n"); // Separação visual
    moverRainha();
    printf("\n"); // Separação visual
    moverCavalo();

    printf("\nFim da movimentação.\n");
    return 0;
}
