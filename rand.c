/* 	Programa:	rand.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descrição:
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define MAX 99

int main ( void )
{
	int i=0 ;
	float j[MAX], media, mediaf;
	srand(time(NULL));
	while (i < MAX)
	{
	    j[i] = (100.0 * rand ())/RAND_MAX;
	    printf("%d - %1.2f\n",i+1, j[i]);
	    media += j[i];
	    i++;
	}
	mediaf = media/MAX;
	printf("%1.2f\n", mediaf);
	

    

	return 0;
}
