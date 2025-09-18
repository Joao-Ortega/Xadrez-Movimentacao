#include <stdio.h>

void movingTower(int times)
{
	if (times == 5)
	{
		printf("Movendo Torre:\n");
	}
	if (times > 0)
	{
		printf("Direita\n");
		return movingTower(times - 1);
	}
	if (times <= 0)
	{
		printf("Fim do movimento, vez do adversário\n");
	}
}

void movingBishop(int times)
{
	if (times == 5)
	{
		printf("Movendo Bispo:\n");
	}
	if (times > 0)
	{
		printf("Cima ");
		for (int i = 5; i > 0; i--)
		{
			if (i == times)
			{
				printf("Direita\n");
			}
		}
		return movingBishop(times - 1);
	}

	if (times <= 0)
	{
		printf("Fim do movimento, vez do adversário\n");
	}
}

void movingHorse(int move)
{
	if (move > 0)
	{
		for (int i = 0; i < 1; i++)
		{
			printf("Cima\n");
			for (int j = 0; j <= i; j++)
			{
				if (move == 1) {
					printf("Direita\n");
				}
			}
		}
		return movingHorse(move - 1);
	}
}

void movingQueen(int times)
{
	if (times == 8)
	{
		printf("Movendo Rainha:\n");
	}
	if (times > 0)
	{
		printf("Esquerda\n");
		return movingQueen(times - 1);
	}
	if (times <= 0)
	{
		printf("Fim do movimento, vez do adversário\n");
	}
}

int main()
{
	int houses = 5;
	int queenMove = 8;
	int userIteract = 0;
	int horseMove = 2;
	int option;
	do
	{
		printf("Escolha uma das opções abaixo:\n");
		printf("1 - Mover Torre\n");
		printf("2 - Mover Bispo\n");
		printf("3 - Mover Cavalo\n");
		printf("4 - Mover Rainha\n");
		printf("5 - Sair do jogo\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			movingTower(houses);
			userIteract = 1;
			break;
		case 2:
			movingBishop(houses);
			userIteract = 1;
			break;
		case 3:
			movingHorse(horseMove);
			userIteract = 1;
			break;
		case 4:
			movingQueen(queenMove);
			userIteract = 1;
			break;
		case 5:
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