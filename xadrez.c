#include <stdio.h>

// ---------- Funções Recursivas ----------

// Torre: move para a direita 'n' casas
void moverTorre(int n) {
    if (n <= 0) return;
    printf("Direita\n");
    moverTorre(n - 1);
}

// Bispo: move na diagonal (cima, direita) 'n' casas
void moverBispo(int n) {
    if (n <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(n - 1);
}

// Rainha: move para a esquerda 'n' casas
void moverRainha(int n) {
    if (n <= 0) return;
    printf("Esquerda\n");
    moverRainha(n - 1);
}

// ---------- Funções com Loops ----------

// Cavalo: simula movimento em "L" (2 pra baixo, 1 esquerda) com loops aninhados
void moverCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int baixo = 0; baixo <= 2; baixo++) {
        for (int esquerda = 0; esquerda <= 1; esquerda++) {
            if (baixo == 2 && esquerda == 1) {
                printf("Baixo\nBaixo\nEsquerda\n");
                break;
            }
            if (baixo + esquerda > 2)
                continue;
        }
        if (baixo == 2) break;
    }
    printf("\n");
}

// Bispo com loops aninhados (vertical + horizontal)
void moverBispoAninhado(int linhas, int colunas) {
    printf("Movimento do Bispo (loops aninhados):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i == j)
                printf("Cima, Direita\n");
        }
    }
    printf("\n");
}


int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    moverCavalo();

    moverBispoAninhado(5, 5);

    return 0;
}
