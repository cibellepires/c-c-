#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int num2[10]; // Array para armazenar 10 números inteiros

    for (i=0; i<10; i++){
        printf("Digite o elemento da posição %d: ", i); 
        scanf("%d", &num2[i]); // Solicita ao usuário que digite o elemento para a posição i do vetor num2
        
    }
    printf("Os valores do vetor são: ");


    for (i=0; i<10; i++) // Loop para imprimir cada elemento do vetor num2
        num2[i] = num2[i]*3;


    for (i=0; i<10; i++)
        printf("%d", num2[i]); // Imprime cada elemento do array num2
        printf("\n");
        
    return 0;
}