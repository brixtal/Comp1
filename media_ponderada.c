/* 	Programa:	media_ponderada.c
   	Autor:		André Brito
	Data:		07/05/2010
	Descroção:	Este programa calcula a média ponderada de 10 números.
*/

#include<stdio.h>

int main ( void )
{
	float nota, peso, soma1, soma2, i, media;
	i = 0;
	soma1 = 0;
	soma2 = 0;
	while (i<10)
	{
		printf("Entre com o nota:\n");
		scanf("%f", &nota);
		printf("Entre com o peso:\n");
		scanf("%f", &peso);
		soma1 += nota*peso;
		soma2 +=peso;
		i++;
	}
	media = soma1/soma2;
	printf("O resultado da média ponderada é: %f\n", media); 
	return 0;
}
