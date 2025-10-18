#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Inicializa a semente com o tempo atual
    srand(time(NULL));

    printf("Um número aleatório diferente a cada execução: %d\n", rand());
    printf("E outro: %d\n", rand());

    return 0;
}