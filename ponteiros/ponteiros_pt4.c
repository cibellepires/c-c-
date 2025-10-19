#include <stdio.h>

int main() {
    int vetor[] = {10, 20, 30};
    int *p_vetor = vetor; // 'vetor' é o endereço do primeiro elemento

    // Acesso indexado (vetor[i]) é equivalente à desreferenciação ( *(ponteiro + i) )

    printf("Segundo elemento (vetor[1]): %d\n", vetor[1]);
    printf("Segundo elemento (*(p_vetor + 1)): %d\n", *(p_vetor + 1)); 

    // Imprimir todos os elementos usando aritmética de ponteiros
    for (int i = 0; i < 3; i++) {
        printf("Elemento %d: %d\n", i, *(p_vetor + i));
    }
    
    return 0;
}