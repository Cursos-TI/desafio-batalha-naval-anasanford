#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int x, y, navio; //x = posição na linha; y = posição na coluna; navio = 1 ou 2

    int tabuleiro[10][10] = { //matriz do tabuleiro; 3 = indica a presença de navio
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 3, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 3, 3, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    printf("Escolha um navio para saber a posição\n");
    printf("1. Navio 1\n");
    printf("2. Navio 2\n");
    printf("Navio: ");
    scanf("%d", &navio);

    switch(navio) {
        case 1: //posição do primeiro navio
            y = 1;
            for(x = 2; x >=2 && x <= 4; x++) {
                printf("Posição Navio 1: [%d][%d] => %d \n", x, y, tabuleiro[x][y]);
            }
        break;
        case 2: //posição do segundo navio
            x = 7;
            for(y = 3; y >= 3 && y <= 6; y++) {
                printf("Posição Navio 2: [%d][%d] => %d \n", x, y, tabuleiro[x][y]);
            }
        break;
        default:
            printf("Opção inválida!\n");
        break;
    }

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
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
