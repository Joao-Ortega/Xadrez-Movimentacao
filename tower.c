#include <stdio.h>

int movingQueen(int times) {
	int initial = 1;
	printf("Movendo torre:\n");
	while (initial <= times)
	{
		printf("Direita\n");
		initial++;
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
		printf("1 - Mover Torre 5 casas para a direita\n");
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