/*
	Programa:	xmatrix.c
	Autor:		André Brito
	Data:	   	01/06/2010
	Descrição:	Este programa exibe uma matriz de linha e colunas definidas pelo usuário e as multiplica.
*/


#include <stdio.h>
#include <string.h>
#define MAX 50

int main (void)
{

	int matriz1[MAX][MAX], matriz2[MAX][MAX], matriz3[MAX][MAX], i, j, k, l;

	scanf("%d",&k);
		for(i=0; i < k ; i++)
		{
			for(j=0; j < k; j++)
			{
				scanf("%d",&matriz1[i][j]);
			}
		}

		for(i=0; i < k; i++)
		{
			for(j=0; j < k; j++)
			{
				printf("%d ", matriz1[i][j]);
			}
			printf("\n");
		}
	for(i=0; i < k ; i++)
	{
		for(j=0; j < k; j++)
		{
			scanf("%d",&matriz2[i][j]);
		}
	}

	for(i=0; i < k; i++)
	{
		for(j=0; j < k; j++)
		{
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}

	for (i=0; i < k; i++)
	{
		for (j=0; j< k; j++)
		{
			matriz3[i][j]=matriz1[i][j]*matriz2[j][i] + matriz1[j][i]*matriz2[i][j];
		}
	}
	for (i=0; i < k; i++)
		{
			for (j=0; j< k; j++)
			{
				printf("%d ", matriz3[i][j]);
			}
			printf("\n");
	}


	return 0;
}