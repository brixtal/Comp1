/* 	Programa:	distancia.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descroção:	Este programa calcula o fatorial de 10 numeros inteiros positivos.
*/

#include<stdio.h>
#include<math.h>

int main ( void )
{
	float x1, x2, y1, y2, base, altura, distancia;

	printf("Insira a coordenada 1: ");
	scanf("%f %f", &x1, &y1);
	printf("Insita a coordenada 2: ");
	scanf("%f %f", &x2, &y2);

	if (x1 > x2)
	{
		base = x1 - x2;
	}
	else
	{
		base = x2 - x1;
	}

	if (y1 > y2)
	{
		altura = y1 - y2;
	}
	else
	{
		altura = y2 - y1;
	}
	distancia = sqrt(altura*altura + base*base);

	printf("a distancia e: %1.2f\n", distancia);

	return 0;
}
