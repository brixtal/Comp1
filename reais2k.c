/* 	Programa:	reais2k.c
   	Autor:		Andr� Brito
	Data:		16/05/2010
	Descri��o:
*/

#include<stdio.h>
#include<math.h>
#define MAX 2000

int main ( void )
{
	int i=0;
	float j[MAX];
	
	while (i < MAX)
	{
	    scanf("%f",&j[i]);
	    if (j[i] < 0 || j[i]>100)
	    {
	        i=i;
	    }
	    else
	    {
	        printf("%d - %1.2f\n", i+1,j[i]);
	        i++;	        
	    }
	}
	        
	return 0;
}
