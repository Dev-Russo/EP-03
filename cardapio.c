#include<stdio.h>

int main()
{   
    char l;
    int quant, stotal, total;

    printf("           Cardapio          \n");
    printf(" Cachorro Quente | A | 1.20\n");
    printf("  Bauru Simples  | B | 1.30\n");
    printf("  Bauru com Ovo  | C | 1.50\n");
    printf("   Hamburguer    | D | 1.20\n");
    printf("  Cheeseburguer  | E | 1.70\n");
    printf("      Suco       | F | 2.20\n");
    printf("  Refrigerante   | G | 2.00\n");
    printf("            Z = Sair       \n");

    printf("Digite o codigo de sua preferencia:\n");
    scanf("%c", &l);

    while (l != 'z' || l != 'Z')
    {
        switch (l)
        {
           case 'a':
            printf("Digite a quantidade:\n");
            scanf("%d", &quant);
            stotal = quant * 1.20;
            break;
    
           case 'b':
            printf("Digite a quantidade:\n");
            scanf("%d", &quant);
            stotal = quant * 1.30;
            break;

           case 'c':
            printf("Digite a quantidade:\n");
            scanf("%d", &quant);
            stotal = quant * 1.50;
            break;

           case 'd':
            printf("Digite a quantidade:\n");
            scanf("%d", &quant);
            stotal = quant * 1.20;
            break;
        
           case 'e':
            printf("Digite a quantidade:\n");
            scanf("%d", &quant);
            stotal = quant * 1.70;
            break;
        
           case 'f':
            printf("Digite a quantidade:\n");
            scanf("%d", &quant);
            stotal = quant * 2.20;
            break;
        
           case 'g':
            printf("Digite a quantidade:\n");
            scanf("%d", &quant);
            stotal = quant * 2.00;
            break;

        
        default:
            printf("Codigo invalido");
            break;
        }

    }
    

    total = stotal;
    printf("O valor total foi de R$%d", total);

    return 0;
}