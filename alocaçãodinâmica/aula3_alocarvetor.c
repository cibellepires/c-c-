#include <stdio.h>
#include <stdlib.h>
// alocar um vetor dinâmico
int main(){
    int tam, i , *vet;
    printf("DIgite o tamanho do vetor: ");
    scanf("%d", &tam);
    srand(time(NULL)); //inicializa o gerador de números aleatórios
     
    vet= malloc(tam * sizeof(int));
    if (vet){
        for (i=0; i<tam; i++){
            *(vet + i) =rand() % 100; //atribui um valor aleatório entre 0 e 99
        }

        for ( i = 0; i < tam; i++){
            printf("%d\n", *(vet + i));
        }

        free(vet); //libera a memória alocada
    }
    else{
        printf("Erro de alocação de memória\n");
    }
    return 0;
  
}