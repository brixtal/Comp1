/* 	Programa:	equacao.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descrição:
*/

#include<stdio.h>
#include<math.h>

int main ( void )
{
	float a, b, c, x1, x2;
	printf("Insira o valor do ceficiente a*x^2: ");
	scanf("%f", &a);
	printf("Insira o valor do coeficiente b*x: ");
	scanf("%f", &b);
	printf("Insira o valor do termo independente c: ");
	scanf("%f", &c);

	if ((b*b - 4*a*c) < 0)
	{
		printf("Erro! A solucao desta equacao nao e um numero real.\n");
	}
	else
	{
		x1 = ((-1*b) + (b*b - 4*a*c))/(2*a);
		x2 = ((-1*b) - (b*b - 4*a*c))/(2*a);
		printf("A solucao da esquacao e: x1=%1.2f e x2=%1.2f", x1,x2);
	}



	return 0;
}
