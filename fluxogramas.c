#include <stdio.h>
int main(void){
    int idade;
    float salario;
    char sexo;

    printf("Quantos anos voce tem?");
    scanf("%d", &idade);

    printf("Qual é o seu salario?");
    scanf("%f", &salario);
    
    printf("Qual é o seu genero? (F/M)");
    scanf(" %c", &sexo);

    printf( "Voce tem %d anos, ganha %f e eh do genero %c", idade, salario, sexo);

    return 0;
}