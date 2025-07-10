#include <stdio.h>
#include <string.h>

int main() {
  char nome1[] = "Fabio";
  char nome2[] = "FABIO";

  // A função strcmp diferencia maiúsculas de minúsculas
  if (strcmp(nome1, nome2) == 0) {
    printf("os nomes são iguais \n");
  } 
  else {
    printf("os nomes são diferentes \n");
  }

  return 0; // É uma boa prática retornar 0 no final da função main
}