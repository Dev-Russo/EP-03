#include<stdio.h>

int main(){
    int i = 1;
    int oddsum = 0;
    int cont = 1;
    int n; 

    printf("De entrada aos valores quer quer ao quadrado");
    scanf("%d", &n);

    do{
        oddsum += i;
        i += 2;
        cont ++;
    }while (cont <= n);

    printf("\nO quadrado desse numero equivale a: %d", oddsum);
    
    return 0;
}
