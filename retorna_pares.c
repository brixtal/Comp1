/* 	Programa:	retorna_pares.c
   	Autor:		André Brito
	Data:		14/05/2010
	Descroção:	Este programa lê 10 números e retorna quantos pares foram lidos
*/

#include<stdio.h>

int main ( void )
{
	int i, valor, pares; 
	i = 1;
	pares = 0;
	valor = 0;
	
	while (i<11)
	{
		printf("Insira %do valor: ", i);
		scanf("%d", &valor);
		if (valor % 2 == 0)
		{
			pares ++;
		}
		i++;
	}		


	printf("Foram escritos %d numreros pares\n", pares); 
	return 0;
}
