#include <stdio.h>
#include <string.h>
#include <ctype.h> // Necessário para tolower() e toupper()

#define N 50

int main(void) {
    char str1[N];
    char str2[N];

    printf("Digite a primeira string: ");
    fgets(str1, N, stdin);
    printf("Digite a segunda string: ");
    fgets(str2, N, stdin);

    // PROBLEMA 1 CORRIGIDO: Remover o '\n' que o fgets deixa no final
    // A função strcspn encontra a posição do primeiro '\n' e o substituímos
    // por '\0', que é o caractere de fim de string.
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // PROBLEMA 4 CORRIGIDO: Usar %zu para o retorno de strlen
    printf("\n--- TAMANHOS ---\n");
    printf("Tamanhos: %zu e %zu\n", strlen(str1), strlen(str2));

    // PROBLEMA 2 CORRIGIDO: Usar tolower() e toupper() para alterar as strings
    // Essas funções são padrão do C e funcionam em qualquer sistema.
    // Elas alteram a string original caractere por caractere.
    printf("\n--- CONVERSÃO DE MAIÚSCULAS/MINÚSCULAS ---\n");
    for (int i = 0; str1[i] != '\0'; i++) {
        str1[i] = tolower(str1[i]);
    }
    printf("Primeira string em minúsculas: %s\n", str1);

    for (int i = 0; str2[i] != '\0'; i++) {
        str2[i] = toupper(str2[i]);
    }
    printf("Segunda string em maiúsculas: %s\n", str2);

    // PROBLEMA 3 CORRIGIDO: Concatenar com segurança
    // Verificamos se str1 tem espaço suficiente para str2 antes de concatenar.
    printf("\n--- CONCATENAÇÃO ---\n");
    if (strlen(str1) + strlen(str2) < N) {
        // Agora que str1 está em minúsculas e str2 em maiúsculas, vamos concatenar
        strcat(str1, str2);
        printf("Concatenação: %s\n", str1);
    } else {
        printf("Não foi possível concatenar: espaço insuficiente no buffer.\n");
    }

    return 0;
}