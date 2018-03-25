/* 	Programa:	asterisco1.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descrição:
*/

#include<stdio.h>
#include<math.h>

int main ( void )
{
	int j, linhas, i=0;
	printf("Insira a quantidade de linhas desejada");
	scanf("%d",&linhas);
	;
		while (i < linhas)
	{
		j = linhas + 1;
		while (j > linhas)
		{
			printf("*");
			j++;
		}
		printf("\n");
		j = i + 1;
		linhas--;
		i++;
	}

	return 0;
}
