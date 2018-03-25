/* 	Programa:	pares.c
   	Autor:		André Brito
	Data:		07/05/2010
	Descroção:	Este número recebe 10 números quaisquer e diz quanto são pares. Este programa não usa if.
*/

#include<stdio.h>

int main ( void )
{
	int numero, i, aux, resultado;
	i = 0;
	resultado = 10;
	aux = 0;
	while (i<10)
	{
		printf("Entre com o numero:\n");
		scanf("%d", &numero);
		aux = numero % 2;	
		resultado -= aux;		
		i++;
	}
	printf("Foram escrito(s) %i numeros pares. \n", resultado); 
	return 0;
}
