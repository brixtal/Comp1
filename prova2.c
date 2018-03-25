#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 50

int main (void)
{
	int i, k, l, o, n, j;
	float m[MAX], soma, media, prod, media2, d1, d2, d3,d4, d5;

	i=0;
	k=0;
	l=0;
	o=0;
	n=0;
	j=0;
	d1=0.0;
	scanf("%d",&n);

	for (i=0; i < n; i++)
	{
		scanf("%f",&m[i]);
    }

    printf("%f %f\n", m[0], m[1]);

    while (j < n)
    {
		soma +=m[j];
		j++;
    }

    while (k  <n)
    {
		media += m[k];
		k++;
    }

    media2= media/n;

    while (l < n)
    {
		prod *=m[l];
		l++;
    }
    while (o < n)
    {
		d1 = m[o] - media2;
		d2 = pow (d1 , 2);
		d3 += d2;
		o++;
    }

    d4= d3/n;
    d5 = sqrt(d4);

    printf("%1.2f %1.2f %1.2f %1.2f\n", soma, media2, prod, d5);
    printf("%1.2f\n",soma);

return 0;

}



