#include <stdio.h>
#include <stdlib.h>


int main(){
    int vate1[10];
    int vate2[10];
    int i;

    for(i=0; i<10; i++){
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vate1[i]);
    }

    for(i=0; i<10; i++)
        vate2[i] = vate1[i]*vate1[i];

    printf("Vetor 1: ");
    for (i=0; i<10; i++)
        printf("%d ", vate1[i]);
    

    printf("\nVetor 2: ");
    for (i=0; i<10; i++)
        printf("%d ", vate2[i]);
    
    return 0;

    }