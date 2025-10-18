#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, vetor[20], fim=19, copia;

    for(i=0; i<20; i++){
        printf ("Digite o %dº número: ", i);
        scanf("%d", &vetor[i]);
    }
  
    printf("\n\nVetor original:\n");
    for (i=0; i<20; i++){
        printf("%5d ", vetor[i]);
    }
    printf("\n\n");
    for (i=0; i<10; i++){
        copia=vetor[i];
        vetor[i]=vetor[fim];
        vetor[fim]=copia;
        fim--;

    }
    printf("\n\nVetor invertido:\n");
    for (i=0; i<20; i++){
        printf("%5d ", vetor[i]);
    }
    printf("\n\n");



    return 0;
}