#include<stdio.h>

int main()
{
    int *n, condicao;
    
    condicao = 0;
    
    printf("Digite um numero positivo e inteiro:\n");
    scanf("%d", n);

    while (*n > condicao)
    {
        condicao++;
        printf("%d\n", condicao);
    }
    
    return 0;
}