/* 5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse; */

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
