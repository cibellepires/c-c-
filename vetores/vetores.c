#include <stdio.h>
#include <stdlib.h> // Biblioteca padrão para funções de alocação de memória e outras utilidades

int main(){
    int idade;
    char sexo;
    float n1;

    int i;
    int num1[10]; //vai armazenar 10 numeros inteiros 
    int num2[] = {1,5,9,15,43}; // Inicialização de um array com valores específicos
    int num3[5]= {1,2,3,4,5}; // Inicialização de um array com 6 valores, o último será ignorado

    char letras[100]; // Array para armazenar até 100 caracteres
    char vogais[5] = {'a', 'e', 'i', 'o', 'u'}; // Array de vogais


    for (i=0; i<5; i++)
       printf("%d", num2[i]); // Imprime o primeiro elemento do array num2
    printf("\n");
    for (i=0; i<5; i++)
       printf("%c", vogais[i]); // Imprime cada vogal do array vogais


  




    return 0;

}