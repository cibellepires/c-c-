/* o scanf só lê uma palavra, ele para de ler ele para de ler ao encontrar. Ele só para de ler ao enconttrar espaço em branco, enter ou tab, para ler uma mensagem 
inteira usamos gets*/

#include <stdio.h>
#define TAM_NOME 50
#define TAM_END 100
#define TAM_CPF 15

int main(void){
    char nome[TAM_NOME];
    char endereco[TAM_END];
    char cpf[TAM_CPF];

    printf("Informe seu nome:");
    fgets(nome, TAM_NOME, stdin);
   
    printf("Informe seu endereco:");
    fgets(endereco, TAM_END, stdin);

    printf("Informe seu cpf:  ");
    fgets(cpf, TAM_CPF, stdin);

    printf("Seus dados:\n ");
    printf("Nome:%s\nENdereco: %s\nCPF: %s",nome, endereco, cpf);

    return 0; 
}
