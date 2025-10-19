#include <stdio.h>

int main() {
    int valor = 10;
    int *p_valor; // Declara um ponteiro para inteiro

    p_valor = &valor; // Atribui o endereço de 'valor' ao ponteiro

    // 1. O valor da variável 'valor'
    printf("Valor de 'valor' (acesso direto): %d\n", valor);

    // 2. O endereço de memória de 'valor'
    printf("Endereço de 'valor' (&valor): %p\n", (void *)&valor);

    // 3. O endereço armazenado no ponteiro 'p_valor' (que é o endereço de 'valor')
    printf("Endereço em 'p_valor': %p\n", (void *)p_valor);

    // 4. O valor apontado por 'p_valor' (desreferenciação)
    printf("Valor apontado por '*p_valor': %d\n", *p_valor);

    // Modificando o valor através do ponteiro
    *p_valor = 20; // O valor na memória do endereço é alterado para 20

    // 5. Novo valor de 'valor'
    printf("Novo valor de 'valor' após alteração pelo ponteiro: %d\n", valor);

    return 0;
}