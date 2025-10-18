#include <stdio.h>
#include <stdlib.h>
 // alocação dinâmica de memória com função malloc: retorna um ponteiro para a região de memória alocada

int main(){
    int *x;
    x= malloc(sizeof(int));
    if (x){

        printf("Mmemória alocada com sucesso \n");
        *x=50;
        printf("Valor de x: %d\n", *x);
        free(x); //libera a memória alocada
    }
    else{
        printf("Erro de alocação de memória\n");
    }

    return 0;

}