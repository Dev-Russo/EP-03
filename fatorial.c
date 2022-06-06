#include<stdio.h>

int main()
{
    int i, n;
    int fat = 1;

    printf("Entre com o valor para fazar o fatorial:\n");
    scanf("%d", &n);

    i = n;

    while (i >= 1 )
    {
        fat *= i;
        i--; 
    }

    printf("%d", fat);

}