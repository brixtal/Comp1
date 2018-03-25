#include <stdio.h>
#include <string.h>

#define MAX 50

int main (void)
{
    char nome[MAX + 1];
    int t;

    gets(nome);
    t=strlen(nome);
    printf("%d\n", t);
    puts(nome);

    return 0;
}
