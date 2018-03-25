/* 	Programa:	ibis.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descrição:
*/

#include<stdio.h>
#include<math.h>

int main ( void )
{
	int jogos,i, gol1, gol2, pontos;
	printf("Insira o numero de jogos disputados: ");
	scanf("%d", &jogos);
	i = 1;
	pontos = 0;
	if (jogos < 0)
	{
		printf("ERRO! O numero de jogos nao e um numero valido\n");
		return 0;
	}
	else
	{
		while (i < (jogos + 1))
		{
			printf("Insira o resultado do %do jogo",i);
			scanf("%d %d", &gol1, &gol2);
			if(gol1 < 0 || gol2 < 0)
			{
				printf("Erro! O numero de gols nao e valido.\n");
				return 0;
			}
			else
			{
				if (gol1 > gol2)
				{
					pontos = pontos + 3;
				}
				else
				{
					if (gol1 == gol2)
					{
						pontos=pontos + 1;
					}
				}
				i++;
			}
		}
	}
	printf("O time Ibis conquistou neste campeonato %d pontos",pontos);

	return 0;
}
