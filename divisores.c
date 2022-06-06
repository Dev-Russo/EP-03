#include<stdio.h>

int main()
{

    int i, div, result;

    printf("Insira um valor inteiro e positivo:\n");
    scanf("%d", &div);

    for(i = 0; i <= div; i++){
        if( div%i == 0){
            printf("%d\n", i);
        }
    }

    return 0;
}