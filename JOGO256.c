#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "LDE.c"

void Menu(LDE *lista)
{
    int opcao = 1;
    int opcao2 = 2;
    while (opcao != 0)
    {

        printf("\nBem vindo ao jogo 256!!! \n");
        printf("\nEscolha uma opção para começar.\n");
        printf("\n ------------MENU---------- \n");
        printf("\n[1] - Move para a esquerda\n");
        printf("\n[2] - Move para a direita\n");
        printf("\n[0] - Sair\n");
        printf("\nSelecione uma opcao:");
        scanf("%d", &opcao);

        if (opcao == 1)
        {
            movimento(lista);
        }
        else if (opcao == 2)
        {
            movimento(lista);
        }
        else if (opcao == 0)
        {
            printf("\nGAME OVER!\n");
            printf("\n");
            printf(" ########### OBRIGADO POR JOGAR ##########\n");
            printf(" ---------------------------------------- \n");
            printf(" ---------------------------------------- \n");
            printf("||  .d8888b.     88d8888        d8P888   ||\n");
            printf("|| d88P  Y88b   d8P88888     d8P888888   ||\n");
            printf("||        888   d8P         d8P8         ||\n");
            printf("||      .d88P   d8P8888    d8P8          ||\n");
            printf("||   .od888P     8888888   d8P888888888  ||\n");
            printf("||  d88P             8888  8d8P8    8888 ||\n");
            printf("|| 8888888888   888888888   Y88b    8888 ||\n");
            printf("|| 8888888888   88d8888       Y8888P888  ||\n");
            printf("\n");
            printf("--------------------------------------------\n");
            printf("||  Desenvolvido por: Renan Gomes Acosta  ||\n");
            printf("||  Matricula: 11230237                   ||\n");
            printf("||  Professor: Luciano Vargas Gonçalves   ||\n");
            printf("--------------------------------------------\n");
            printf("\n");
        }
        else
        {
            printf("\nOpcao invalida!\n");
        }
    }
}

int main()
{
    LDE *rodada = criaListaLDE();
    int opcao = 1;
    Menu(rodada);
    return 0;
}