/* 	Programa:	ibis.c
   	Autor:		André Brito
	Data:		16/05/2010
	Descrição:
*/

#include<stdio.h>
#include<math.h>

int main ( void )
{
	int i=0, alunos;
	float m1, m2, m3;
	printf("Insira a quantidade de alunos: ");
	scanf("%d", &alunos);
	i = 1;
	if (alunos < 0)
	{
		printf("Erro! A quantidade de alunos e invalida.\n");
		return 0;
	}
	else
	{
		while (i < (alunos + 1))
		{
			scanf("%f %f", &m1, &m2);
			if (m1<0 || m2<0)
			{
				printf("ERRO! Nota invalida\n");
				return 0;
			}
			else
			{
				if (((m1+m2)/2)>=7)
				{
					printf("%d APROVADO\n",i);
				}
				else
				{
					scanf("%f",&m3);
					if (m3 < 0)
					{
						printf("ERRO! Nota invalida\n");
					}
					else
					{
						if (((((m1+m2)/2) + m3)/2) >= 5)
						{
							printf("%d APROVADO\n",i);
						}
						else
						{
							printf("%d REPROVADO\n",i);
						}
					}
				}
			}
			i++;
		}
	}

	return 0;
}
