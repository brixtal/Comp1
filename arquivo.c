#include < stdio .h >
#include < stdlib .h >
int main ( void )
{
       int c;
       FILE * pa;
       char * nome = "arquivo.txt";
       /* Abre o arquivo para leitura e escrita */
       if (( pa = fopen (nome , "r")) == NULL )
       {
             printf ( " \ n \ nNao foi possivel abrir o arquivo .\ n " );
             exit (1);
       }
       c = fgetc(pa);
       while (! feof(pa))
       {
             putchar(c);
             c = fgetc(pa);
       }
      fclose(pa);
       return 0;
}
