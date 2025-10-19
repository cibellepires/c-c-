#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
    int temp = *a; // Pega o valor apontado por 'a'
    *a = *b;       // Altera o valor apontado por 'a' para o valor apontado por 'b'
    *b = temp;     // Altera o valor apontado por 'b' para o valor original de 'a'
}

int main() {
    int x = 5, y = 10;
    
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    
    // Passamos os endereços de x e y
    trocar(&x, &y); 
    
    printf("Depois da troca: x = %d, y = %d\n", x, y);
    // Saída: Depois da troca: x = 10, y = 5
    
    return 0;
}