/* 	Programa:	asterisco1.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descrição:
*/

#include<stdio.h>
#include<math.h>

int main ( void )
{
	int j, linhas, k,i=0;
	printf("Insira a quantidade de linhas desejada");
	scanf("%d",&linhas);
	j = 0;
		while (i < linhas)
	{
		while (j < linhas)
		{
			printf("*");
			j++;
		}
		printf("\n");
		j = i + 1;
		i++;
	}

	return 0;
}
