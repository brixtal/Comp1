/* 	Programa:	saldo.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descrição:
*/

#include<stdio.h>
#include<math.h>

int main ( void )
{
	int jogos, i, gol1, gol2, saldo;
	i = 1;
	saldo = 0;
	printf("Insira a quantidade de jogos realizados: ");
	scanf("%d",&jogos);
	if (jogos < 0)
	{
		printf("ERRO! O numero de jogos nao e valido.\n");
	}
	else
	{
		while (i < (jogos + 1))
		{
			printf("Insira o resultado do %do jogo: ",i);
			scanf("%d %d", &gol1, &gol2);
			if (gol1 < 0 || gol2 <0)
			{
				printf("ERRO! O numero de gols nao e valido.\n");
			}
			else
			{
				saldo = gol1 + gol2;
			}
			i++;
		}
	}

	printf("O saldo de gols do time foi de %d gols.", saldo);

	return 0;
}
