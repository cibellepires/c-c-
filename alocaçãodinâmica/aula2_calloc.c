#include <stdio.h>
#include <stdlib.h>
// alocação dinâmica de memória com função calloc: retorna um ponteiro para a região de memória alocada
int main(){
    int *x;
    x=calloc(1, sizeof(int)); //aloca memória para 1 inteiro e inicializa com 0
    if (x){
        printf("Memória alocada com sucesso \n");
        printf("Valor inicial de x: %d\n", *x); 
        *x=50;
        printf("Valor de x após atribuição: %d\n", *x);
        free(x); //libera a memória alocada

    }
    else{
        printf("Erro de alocação de memória\n");
    }
    return 0;
}