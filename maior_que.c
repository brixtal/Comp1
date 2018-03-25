/* 	Programa:	maior_que.c
   	Autor:		André Brito
	Data:		14/05/2010
	Descrição:	São pedidos 10 números quaisquer e o programa diz qual é o maior número.
*/

#include<stdio.h>

int main ( void )
{
	int i;
	float	valor, j; 
	i = 1;
	valor = 0.0;
	j = 0.0;
	
	while (i<11)
	{
		printf("Insira %do valor: ", i);
		scanf("%f", &j);
		if (valor < j)
		{
			valor = j;
		}
		i++;
	}


	printf("O maior numero escrito foi %1.3f\n", valor); 
	return 0;
}
