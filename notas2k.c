/* 	Programa:	notas2k.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descrição:
*/

#include<stdio.h>
#include<math.h>
#define MAX 2000

int main ( void )
{
	int i=0, j;
	float nota[MAX], media,mediaf;
	j=0;
	while (i < MAX)
	{
	    scanf("%f",&nota[i]);
	    if (nota[i] < 0 || nota[i]>10)
	    {
	        i=i;
	    }
	    else
	    {
	        printf("%d - %1.2f\n", i+1,nota[i]);
	       
	    	    if (nota[i] > 5.0)
	        {
	            j++;
	            media+=nota[i];
	        }
	         i++;
	    }	    
	}
	mediaf = media/j;
    printf("media = %1.2f - Aprovados = %d\n",mediaf, j);
	        
	return 0;
}
