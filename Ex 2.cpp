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
