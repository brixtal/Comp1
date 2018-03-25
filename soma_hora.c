/* 	Programa:	soma_hora.c
   	Autor:		André Brito
	Data:		14/05/2010
	Descrição:	São pedidos 2 periodos de tempo e o programa soma os dois.
*/

#include<stdio.h>

int main ( void )
{
	int total, h1, h2, m1, m2, s1, s2, h3, h4, m3, m4, tempo1, tempo2, hora, min, seg, min1;
	
	total = 0;
	h1 = 0;
	h2 = 0;
	m1 = 0;
	m2 = 0;
	s1 = 0;
	s2 = 0;
	h3 = 0;
	h4 = 0;
	m3 = 0;
	m4 = 0;
	tempo1 = 0;
	tempo2 = 0;
	hora = 0;
	min = 0;
	seg = 0;
	min1 = 0;
		
	printf("Insira o primeiro periodo de tempo, no seguinte formato hh:mm:ss : ");
	scanf("%d:%d:%d", &h1,&m1,&s1);
	
	printf("Insira o segundo periodo de tempo, no seguinte formato hh:mm:ss : ");
	scanf("%d:%d:%d", &h2,&m2,&s2);

	h3 = h1 * 360;
	h4 = h2 * 360;
	m3 = m1 * 60;
	m4 = m2 * 60;
	tempo1 = h3 + m3 + s1;
	tempo2 = h4 + m4 + s2;
	total = tempo1 + tempo2;
	
	if ((m3 > 3600) || (m3 < 0) || (m4 > 3600) || (m4 < 0) || (s1 > 60) || (s1 < 0) || (s2 > 60) || (s2 < 0) || (h3 < 0) || (h4 < 0))
	{
		printf("Valor Inválido para hora.\n");
	}
	else
	{
		hora = total/360;
		min1 = hora % 360;
		min = min1/60;
		seg = min % 60;
	}

	printf("O tempo total gasto foi de: %d horas, %d minutos e %d segundos\n", hora, min, seg); 
	return 0;
}
