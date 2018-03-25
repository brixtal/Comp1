/* Programa:	Testes.c
   Autor:		André Brito
   Data:		04/05/2010
   Descrição: 	Este programa visa testar todos os problemas que podem cair na prova de amanhã de Computação 1
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