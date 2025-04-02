#include <stdio.h>

int main() {
    int i;
    
    printf("Desafio de Xadrez!!\n");

    // Movimento da Torre 'for'
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) { // incremento = 0, incrimento menor que 5, incremento mudará
        printf("Direita\n"); // imprime a movimentação da peça
    }
    
    printf("\n");
    
    // Movimento do Bispo usando 'while'
    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n"); // imprime a movimentação da peça
        i++;
    }
    
    printf("\n");
    
    // Movimento da Rainha 'do-while'
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n"); // imprime a movimentação da peça
        i++;
    } while (i < 8);
    
    return 0;
}