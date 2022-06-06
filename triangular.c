#include<stdio.h>

int main(){
    int n, i, aux;

    printf("Escreva o termo que você quer descobrir dos numeros triangulares\n");
    scanf("%d", &n );

    for(i = 1; i <= n; i++){    
        aux = (i*(i+1))/2;
        printf("%d, ", aux);
    }

    return 0;
}