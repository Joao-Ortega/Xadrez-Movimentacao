#include <stdio.h>

int movingQueen(int *times)
{
    printf("Movendo rainha:\n");
    do
    {
        printf("Esquerda\n");
        (*times)--;
    } while (*times > 0);


    printf("Fim do movimento, vez do adversário\n");
    return 0;
}

int main()
{
    int houses = 8;
    int userIteract = 0;
    int option;
    do
    {
        printf("Escolha uma das opções abaixo:\n");
        printf("1 - Mover Rainha 8 casas para esquerda\n");
        printf("2 - Sair do jogo\n");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            movingQueen(&houses);
            userIteract = 1;
            break;
        case 2:
            printf("Saindo do jogo....Até mais!\n");
            userIteract = 1;
            break;
        default:
            printf("Opção inválida, tente novamente!\n");
            break;
        }
    } while (!userIteract);

    return 0;
}