#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo (4 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int casa = 1;
    while (casa <= 4) {
        printf("Cima, Direita\n");
        casa++;
    }

    // Simulação do movimento da Rainha (6 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int contador = 1;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador <= 6);

    return 0;
}