/*

// nivel novato

#include <stdio.h>

int main() {
    // Movimento da Torre utilizando o loop 'for'
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo utilizando o loop 'while'
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int j = 1;
    while(j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha utilizando o loop 'do-while'
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while(k <= 8);

    return 0;
}
*/

/*

// nivel Aventureiro

#include <stdio.h>

int main() {
    // Movimentação da Torre usando for
    printf("Movimentação da Torre (5 casas para a direita): \n");
    for(int i = 1; i <= 5; i++) {
        printf("Direita \n");
    }

    // Movimentação do Bispo usando while
    printf("\n Movimentação do Bispo (5 casas na diagonal para cima e à direita): \n");
    int j = 1;
    while(j <= 5) {
        printf("Cima Direita \n");
        j++;
    }

    // Movimentação da Rainha usando do-while
    printf("\n Movimentação da Rainha (8 casas para a esquerda): \n");
    int k = 1;
    do {
        printf("Esquerda \n");
        k++;
    } while(k <= 8);

    // Movimentação do Cavalo usando loops aninhados (for e while)
    printf("\n Movimentação do Cavalo (2 casas para baixo e 1 para a esquerda): \n");

    for (int m = 1; m <= 2; m++) {
        printf("Baixo \n");
    }

    int n = 1;
    while (n <= 1) {
        printf("Esquerda \n");
        n++;
    }

    return 0;
}
*/

#include <stdio.h>

// nivel Mestre

// Função para mover a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) return;  
    moverTorre(casas - 1);
    printf("%d-Direita\n", casas);
}

// Função para mover o Bispo (5 casas na diagonal para cima e à direita)
void moverBispo(int casas) {
    if (casas == 0) return;
    moverBispo(casas - 1);
    printf("%d-Cima Direita\n", casas);
}

// Função para mover a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return;
    moverRainha(casas - 1);
    printf("%d-Esquerda\n", casas);
}

int main() {
    // Movimentação da Torre
    printf("Movimentação da Torre (5 casas para a direita):\n");
    moverTorre(5);

    // Movimentação do Bispo
    printf("\nMovimentação do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispo(5);

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);

    // Movimentação do Cavalo usando loops aninhados
    printf("\nMovimentação do Cavalo (2 casas para cima e 1 para a direita):\n");

    for (int m = 0; m < 2; m++) {
        printf("%d-Cima\n", 1 + m);
    }

    int n = 0;
    while (n < 1) {
        printf("Direita\n");
        n++;
    }

    return 0;
}

