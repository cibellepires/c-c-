#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int num2[10]; // Array para armazenar 10 números inteiros

    for (i=0; i<10; i++){
        printf("Digite o elemento da posição %d: ", i);
        scanf("%d", &num2[i]);
        
    }
    printf("Os valores do vetor são: ");


    for (i=0; i<10; i++)
        printf("%d", num2[i]); // Imprime cada elemento do array num2
    printf("\n");
    return 0;
}