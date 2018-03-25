/* 	Programa:	pi_dividido_quatro.c
   	Autor:		André Brito
	Data:		07/05/2010
	Descroção:	Este programa calcula o valor de pi dividido por 4.
*/

#include<stdio.h>
#include<math.h>
int main ( void )
{
	float valor1, soma1, valor2, soma2, resultado, somas;
	int i;
	i = 0;
	valor1 = 1.0;
	valor2 = -3.0;
	soma1 = 0.0;
	soma2 = 0.0;
	while (i<100)
	{
		valor1 = (valor1 + 4) ;
		soma1 += (1/valor1);
		valor2 = (valor2 -4);
		soma2 += (1/valor2);
		i++;

	}
	somas = (soma1 + soma2);
	resultado = 1.0 - somas;

	printf("pi/4 e igua a: %f \n", resultado);
	return 0;
}
