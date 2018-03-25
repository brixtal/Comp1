/* 	Programa:	retorna_media.c
   	Autor:		André Brito
	Data:		14/05/2010
	Descroção:	Lê a média para aprovação, número de alunos e quantidade de alunos que tiraram nota maior ou igual à média.
*/

#include<stdio.h>

int main ( void )
{
	int i, alunos, acima, j;
	float	media, nota; 
	i = 0;
	media = 0.0;
	nota = 0.0;
	alunos = 0;
	acima = 0;
	j = i + 1;
		
	printf("Insira a media para aprovacao: ");
	scanf("%f",&media);
	
	if (media < 1)
	{ 
		printf ("Erro. A media não é válida\n");
	}
	else
	{	
		printf("Insira o numero de alunos: ");
		scanf("%d",&alunos);
	
		if (alunos <=0)
		{
			printf ("Erro. o numero de alunos não é valida\n");
			}
		else
		{
			while (i < alunos)
			{
				printf("Insira a nota do %do aluno: ", j);
				scanf("%f", &nota);
				if (nota < 0)
				{
					printf ("Erro. A nota não é válida\n");
				}
				else 
				{
					if (nota >= media)
					{
						acima ++;
					
					j++;
					i++;
					}
				}
			}
		}
}	
	

	printf("%d alunos tiraram notas acima da media\n", acima); 
	return 0;
}
