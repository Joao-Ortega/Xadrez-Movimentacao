#include <stdio.h>

int movingQueen(int times) {
	printf("Movendo bispo:\n");
	for (int i = 1; i <= times; i++)
    {
        printf("Cima Direita\n");
    }
    
	printf("Fim do movimento, vez do adversário\n");
	return 0;
}

int main()
{
	int houses = 5;
	int userIteract = 0;
	int option;
	do
	{
		printf("Escolha uma das opções abaixo:\n");
		printf("1 - Mover Bispo 5 casas para diagonal acima\n");
		printf("2 - Sair do jogo\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			movingQueen(houses);
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