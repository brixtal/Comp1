/* Programa:	Testes.c
   Autor:		Andr� Brito
   Data:		04/05/2010
   Descri��o: 	Este programa visa testar todos os problemas que podem cair na prova de amanh� de Computa��o 1
*/

#include<stdio.h>
#include<stdlib.h>

int main ( void )
{
	int a, b, i, c;
	i=1;
	b=0;
	c=4;
	scanf("%d", &b) ;
	while (i>0)
	{
		a = b + ++c;
		i--;
	}
	printf("%d %d %d %d \n", a, i, b, c);
	return 0;
}