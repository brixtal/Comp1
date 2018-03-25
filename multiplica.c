/*
  Programa:	multiplica.c
  Autor:	Marcos Vinicius
  Data:		23/03/2003
  Decrição;	
*/

#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
    int a, b, c; /* nomes ruins */

    c = 0;
    printf("? ");
    scanf("%d", &a);
    printf("? ");
    scanf("%d", %b);
    while (a > 0)
    {
	c = c + b;
	a = a - 1;
    }
    printf("%d\n", c);
    return 0;
}