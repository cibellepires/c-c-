#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, quant[10];
    float valor[10], valortotal=0, valorparcial;

    for (i=0; i<10; i++){
        printf("Digite o valor unitário e a quantidade de cada produto: ");
        scanf("%f %d", &valor[i], &quant[i]);
    }

    for(i=0; i<10; i++){
        valorparcial = valor[i] * quant[i];
        printf("Produto %d: Valor unitário = %.2f, Quantidade = %d, valor total=%f\n", i+1, valor[i], quant[i], valorparcial);
        valortotal += valorparcial;
    }


}