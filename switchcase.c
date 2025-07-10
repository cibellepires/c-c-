// substitui comandos if e else para casos em que queremos comparar se o valor de variáveis são iguais e constantes
#include <stdio.h>
int main (void) {
    int valor;
    printf("Digite um valor entre 1 e 5: ");
    scanf ("%d", &valor);
    switch (valor) {
        case 1: 
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        default:
            printf("Valor invalido\n");
    }
    return 0;

}