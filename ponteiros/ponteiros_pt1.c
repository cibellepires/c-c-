#include <stdio.h>
#include <stdlib.h>

int main(){
    int *valor1, valor2 = 50;
    char *letra1, letra2 = 'g';



    valor1= &valor2;
    letra1= &letra2;

    printf("valor da variavel valor2: %d\n", valor2);
    printf("endereco da variavel valor2: %p\n", &valor2);
    printf("valor do ponteiro valor1: %p\n", valor1);
    printf("conteudo apontado pelo ponteiro valor1: %d\n\n", *valor1);

        

    

}