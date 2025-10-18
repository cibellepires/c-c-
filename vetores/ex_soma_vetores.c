#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int vet1[10], vet2[10], vet3[10], i;
    srand(time(NULL)); // Seed for random number generation
    // Fill vet1 with random numbers between 0 and 100
    for (i=0; i<10; i++){
        vet1[i]=rand()% 100;
        vet2[i]= rand()%100;
    }
    
    for (i=0; i<10; i++){
        vet3[i]= vet1[i] + vet2[i];
    }
    
    printf("\nVetor 1:");
    for (i=0; i<10; i++){
        printf("%5d ", vet1[i]);

    }

    printf("\n\nVetor 2:");
    for (i=0; i<10; i++){
        printf("%5d ", vet2[i]);    
    }

    printf("\n\nVetor 3 (Soma):");
    for (i=0; i<10; i++){
        printf("%5d ", vet3[i]);    
    }

    return 0;


}


