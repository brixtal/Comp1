/* 	Programa:	asterisco1.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descrição:
*/

#include<stdio.h>
#include<math.h>

int main ( void )
{
	int j, linhas, colunas,i=0;
	printf("Insira a quantidade de linhas desejada");
	scanf("%d",&linhas);
	printf("Insira a quantidade 'colunas' desejada");
	scanf("%d", &colunas);
	while (i < linhas)
	{
		j=0;
		while (j < colunas)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}

	return 0;
}
