#include <stdio.h>

int main(void){
    int x,y;
    printf("Forneca os dois numeros");
    scanf("%d %d", &x, &y);
    printf("Soma: %d \n", x+y);
    printf("subtracao: %d \n", x-y);
    printf("Parte inteira x/y: %d \n", x/y);
    printf("Parte inteira y/x: %d \n", x/y);
    printf("Resto de x por y: %d \n", x%y);
    printf("resto de y por x: %d \n", y%x);
    printf("Multiplicacao: %d \n", x*y);
    printf("Divisao de x por y: %f\n", x/(float)y); //casting: mudando o tipo da variavel
    return 0;





}