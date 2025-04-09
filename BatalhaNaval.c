/*#include <stdio.h>

//Esse era um teste para colocar a posição dos navios pelo terminal, porem, não coloquei no projeto final pela complicação de posicionar as coordenadas.

#define Horizontal = 10
#define Vertical = 10

int main() {

    int NavHori_CM, NavHori_ED, NavVert_CM, NavVert_ED;

    printf("informe a posição do navio na horizontal (--->):\n");
    printf("posição de Cima para baixo de 0 a 9:\n");
    scanf("%d", &NavHori_CM);

    printf("posição da Esquerda para Direita de 0 a 7:\n");
    scanf("%d", &NavHori_ED);

    printf("\n");

    printf("informe a posição do navio na vertical (↓):\n");
    printf("posição de Cima para baixo de 0 a 7:\n");
    scanf("%d", &NavVert_CM);

    printf("posição da Esquerda para Direita de 0 a 9:\n");
    scanf("%d", &NavVert_ED);

    printf("\n");

    int tabuleiro[Vertical][Horizontal] = 0; // Inicializa o tabuleiro com água (0)

    // Posiciona o navio horizontal
    for (int i = 0; i < Horizontal; i++)
        tabuleiro[NavHori_CM][NavHori_ED + i] = 3;

    // Posiciona o navio vertical
    for (int i = 0; i < Vertical; i++)
        tabuleiro[NavVert_CM + i][NavVert_ED] = 3;

    // Imprime o tabuleiro
    for (int i = 0; i < tabuleiro; i++) {
        for (int j = 0; j < 10; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }

    return 0;
}*/

#include <stdio.h>

#define TAMANHO 10
#define NAVIO 3
#define CRUZ 5


int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0}; // Inicializa o tabuleiro com água (0)

    // Posiciona o navio horizontal ⟷ (linha 0)
    for (int i = 0; i < NAVIO; i++)
        tabuleiro[0][2 + i] = NAVIO;

    // Posiciona o navio vertical ↕ (coluna 0)
    for (int i = 0; i < NAVIO; i++)
        tabuleiro[0 + i][0] = NAVIO;

    // Posiciona o navio diagonal para direita (linha 0, coluna 7)
    for (int i = 0; i < NAVIO; i++)
        tabuleiro[0 + i][7 + i] = NAVIO;

    // Posiciona o navio diagonal para esquerda (linha 4,coluna 8)
    for (int i = 0; i < NAVIO; i++)
    tabuleiro[4 + i][8 - i] = NAVIO;

    // posiciona a cruz (linha 4, coluna 3)
    for (int i = 0; i < CRUZ; i++)
    //linha horizontal ⟷
    tabuleiro[4][1 + i] = NAVIO,
    //linha vertical ↕
    tabuleiro[2 + i][3] = NAVIO;

    // posiciona o triangulo ()
    for (int i = 0; i < CRUZ; i++) {
          //base do triangulo
          tabuleiro[7][2] = NAVIO;
        for (int i = 0; i < NAVIO; i++)
        {
          //meio do triangulo
          tabuleiro[8][1 + i] = NAVIO;
        }
          //ponta do triangulo
          tabuleiro[9][0 + i] = NAVIO;
    }
  
    for (int i = 0; i < NAVIO; i++)
    //linha horizontal ⟷ (linha 8)
    tabuleiro[8][7 + i] = NAVIO, 
    //linha vertical ↕ (coluna 8)
    tabuleiro[7 + i][8] = NAVIO;

  
    // Imprime o tabuleiro
    printf("Aguá = 0, navio = 3, habilidade = 5\n");
    printf("\n");

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++)
            printf("%d ", tabuleiro[i][j]);
        printf("\n");
    }
    return 0;
}
