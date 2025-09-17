#include <stdio.h>

int movingHorse(int times, int direction) {
	printf("Movendo Cavalo:\n");
	for (int i = 1; i <= times; i++)
    {
        printf("Baixo\n");
        while (i == times)
        {
            if (direction == 1) {
                printf("Esquerda\n");
            }
            if (direction == 0) {
                printf("Direita\n");
            }
            i++;
        }
        
    }
    
	printf("Fim do movimento, vez do adversário\n");
	return 0;
}

int main()
{
	int houses = 2;
	int userIteract = 0;
	int option;
	do
	{
		printf("Escolha uma das opções abaixo:\n");
		printf("1 - Mover Cavalo para baixo e para esquerda!\n");
        printf("2 - Mover Cavalo para baixo e para direita!\n");
		printf("3 - Sair do jogo\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			movingHorse(houses, 1);
			userIteract = 1;
			break;
		case 2:
			movingHorse(houses, 0);
			userIteract = 1;
			break;
        case 3:
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