/*
	Programa:	xmatrix.c
	Autor:		André Brito
	Data:	   	01/06/2010
	Descrição:	Este programa exibe uma matriz de linha e colunas definidas pelo usuário.
*/


#include <stdio.h>
#include <string.h>
#define MAX 50

int main (void)
{

	int matriz[MAX][MAX], i, j, k, l;

	scanf("%d",&k);
	scanf("%d",&l);

	for(i=0; i < k ; i++)
	{
		for(j=0; j < l; j++)
		{
			scanf("%d",&matriz[i][j]);
		}
	}

	for(i=0; i < k; i++)
	{
		for(j=0; j < l; j++)
		{
			printf("%d", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}