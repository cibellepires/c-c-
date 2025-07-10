#include <stdio.h>
int main (void) {
   int salario, imposto, inss, imposto_renda, inss_valor, salario_liquido, opcao;
   printf("Digite o salario: ");
   scanf("%d", &salario);
   printf("Digite a taxa do imposto de renda: ");
   scanf("%d", &imposto);
   printf("Digite a taxa do inss: ");
   scanf("%d", &inss);

   imposto_renda=(salario * imposto) / 100;
   inss_valor=(salario * inss) / 100;
   salario_liquido=salario - imposto_renda - inss_valor;
   
   printf("Escolha 1) para salário líquido, 2) para imposto de renda, 3) para valor do INSS: ");
   scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Salario liquido: %d\n", salario_liquido);
            break;
        case 2:
            printf("Imposto de renda: %d\n", imposto_renda);
            break;
        case 3:
            printf("Valor do INSS: %d\n", inss_valor);
            break;
        default:
            printf("Opcao invalida\n");
    }
         
    return 0;

}