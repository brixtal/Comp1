/*
  Programa:	laco.c
  Autor:	Marcos Vinicius
  Data:		23/03/2003
  Descrição:	
*/

#include <stdio.h>
#include <stdlib.h>

int main ( void )
{
    int i;
    float media, nota;
    
    media = 0;
    
    i = 0;
    while (i < 5)
    {
	printf("%d ---> ", i);
	scanf("%f", &nota);
	media = media + nota;
	i = i + 1;
    }
    media = media / 5;
    printf("%f\n", media);
    return 0;
}