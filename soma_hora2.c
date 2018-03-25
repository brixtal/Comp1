/* 	Programa:	soma_hora2.c
   	Autor:		André Brito
	Data:		14/05/2010
	Descrição:	São pedidos 2 periodos de tempo e o programa soma os dois.
*/

#include<stdio.h>

int main ( void )
{
	int i, hora, min, seg, seg2, min2, hora2, min3, hora3, seg3;
	i = 0;
	hora2 = 0;
	min2 = 0;
	seg2 = 0;
	hora3 = 0;
	min3 = 0;
	seg3 = 0;
	
	while (i < 2)
	{
	scanf("%d", &hora);
	scanf("%d", &min);
	scanf("%d", &seg);
	seg2 += seg;
	min2 += min;
	hora2 +=hora;
	min3 = min2 + (seg2/60);
	hora3 = hora2 + (min3/60);
	min3 = min3 % 60;
	seg3 = seg2 % 60;
	
	i++;
	}
	
	printf("O tempo total gasto foi de: %d horas, %d minutos e %d segundos\n", hora3, min3, seg3); 
	return 0;
}
