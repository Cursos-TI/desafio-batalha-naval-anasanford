#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {

    int tabuleiro[LINHAS][COLUNAS] = { //matriz do tabuleiro; 3 = indica a presença de navio
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
        {0, 3, 0, 3, 0, 0, 0, 3, 0, 0},
        {0, 3, 0, 0, 3, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 3, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 3, 3, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //mostrando o tabuleiro
    printf("--- Tabuleiro ---\n");
    for(int x = 0; x < LINHAS; x++) { //x = posição na linha
        for(int y = 0; y < COLUNAS; y++) { //y = posição na coluna
            printf("%d ", tabuleiro[x][y]);
        }
        printf(" \n");
    }

    //mostrando as habilidades:
    printf("--- Habilidades ---\n");

    printf("- CONE -\n");
    for(int x = 0; x < LINHAS; x++) {
        for(int y = 0; y < COLUNAS; y++) {
            //?????????????????????????????????????????????????????????
        }
    }

    printf("- CRUZ -\n");
    int matrizCruz[LINHAS][COLUNAS];
    for(int x = 0; x < LINHAS; x++) {
        for(int y = 0; y < COLUNAS; y++) {
            int meio = COLUNAS/2 - 1; //definindo o ponto central
            matrizCruz[meio][y] = 1; // coluna "central"
            matrizCruz[x][meio] = 1; //linha "central"
            printf("%d ", matrizCruz[x][y]);
        }
        printf("\n");
    }
    
    printf("- OCTAEDRO -\n");
    //?????????????????????????????????????????????????????????



    
    // Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
