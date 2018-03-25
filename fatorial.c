/* 	Programa:	fatorial.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descroção:	Este programa calcula o fatorial de 10 numeros inteiros positivos.
*/

#include<stdio.h>
int main ( void )
{
	unsigned int i, numero, fatorial;
	i=0;
	numero = 0;

	while (i<10)
	{
		fatorial = 1;
		printf("Insira um numero");
		scanf("%ud", &numero);

		while (numero > 0)
		{
			fatorial = numero * fatorial;
			numero = numero - 1;
		}

		printf("Fatorial e %ud\n", fatorial);
		i++;
	}

	return 0;
}
