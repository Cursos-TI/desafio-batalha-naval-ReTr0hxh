#include <stdio.h>

int main(){
    //CRIAÇÃO DO TABULEIRO

        //cabeçalho
            printf("      TABULEIRO BATALHA NAVAL \n");
        //Letras das colunas
            char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',}; 
            printf("    %c  %c  %c  %c  %c  %c  %c  %c  %c  %c \n", linha[0], linha[1], linha[2], linha[3], linha[4], linha[5], linha[6], linha[7], linha[8], linha[9]);

        //Tabuleiro
    int tabuleiro[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
         
       
    //navios
    int navio1[3] = {3, 3, 3}; //horizonta
    int navio2[3] = {3, 3, 3}; //vertical
    int navio3[3] = {3, 3, 3}; //diagonal
    int navio4[3] = {3, 3, 3}; //diagonal

    //posição do navio horizontal
    int navio1Linha = 2; //linha
    int navio1Coluna = 1; //coluna

    //posição navio vertical

    int navio2Linha = 3; 
    int navio2Coluna = 7; 

    //posição navio na diagonal

    int navio3linha = 5; 
    int navio3coluna = 5; 

    //posição navio na diagonal

    int navio4linha = 6; 
    int navio4coluna = 2; 


    //colocando navio horizontal
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[navio1Linha][navio1Coluna + i] = navio1[i];
    }
    
    //colocando navio vertical
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[navio2Linha + i][navio2Coluna] = navio2[i];
    }

    //colocando navio na diagonal
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[navio3linha + i][navio3coluna + i] = navio3[i];
    }

    //colocando navio na diagonal
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[navio4linha + i][navio4coluna + i] = navio4[i];
    }

     //exibindo as casas do tabuleiro
    for (int i = 0, e = 1; i < 10, e < 11; i++, e++) // i = linha | e = tabela de 1 a 10 para localizar as casas
    {
            if (e < 10) //numeração das linhas
            {
                printf(" %d ", e); //corrigindo o espaçamento
            }else {
                printf("%d ", e);
            }

        //mostrando o tabuleiro
            for (int j = 0; j < 10; j++)
            {                         
                printf(" %d ", tabuleiro[i][j]);
            }
        printf("\n");
    }      



        
    return 0;
}