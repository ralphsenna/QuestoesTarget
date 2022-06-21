/* 2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

IMPORTANTE:

Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código; */

#include <stdio.h>

int Fibonacci(int n)
{
    if (n==0 || n==1)
        return n;
    else if (n>=2)
        return Fibonacci(n-2)+Fibonacci(n-1);
}

int main(void)
{
    int i, ele, soma=0;
    printf("Digite o elemento que deseja verificar se pertence a sequencia de Fibonacci: ");
    scanf("%d", &ele);
    for (i=0; soma<ele; i++)
        soma = Fibonacci(i);
    if (soma==ele)
        printf("\nO elemento pertence a sequencia!");
    else
        printf("\nO elemento nao pertence a sequencia!");
    return 0;
}
