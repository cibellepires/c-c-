#include <stdio.h>
int main(void){
    int n, i;
    float numerador, denominador, soma = 0.0;
    numerador = 1.0;
    denominador = 1.0;

    printf("Digite o numero de elementos da serie:");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        soma += numerador / denominador;
        numerador = numerador*2.0;
        denominador = denominador *3.0;
    }
    printf("Soma da serie S= 1+2/3+4/9+...+%d = %.2f\n", n, soma);
    return 0;
}