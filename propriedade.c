#include<stdio.h>

int main()
{
    int i, n1, n2, soma;
    
    for ( i = 1000; i >= 1000 && i <= 9999; i++)
    {
        n1 = i/100;
        n2 = i%100;
        soma = n1 + n2;
        if(soma * soma == i ){
            printf("Numero %d possui a propriedade\n", i);
        }
    }
    
    
    
    return 0;
}