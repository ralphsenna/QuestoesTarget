#include <stdio.h>

int main(void)
{
    char Palavra[10]="Palavra", PalavraInvertida[10];
    int i, j;
    for (i=9, j=0; i>=0 && j<=9; i--)
        if ((Palavra[i]>=65 && Palavra[i]<=90) || (Palavra[i]>=97 && Palavra[i]<=122))
        {
            PalavraInvertida[j] = Palavra[i];
            j++;
        }
    printf("\nPalavra Normal: %s", Palavra);
    printf("\nPalavra Invertida: %s", PalavraInvertida);
    return 0;
}
