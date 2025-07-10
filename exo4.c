//tabuada
#include <stdio.h>
int main (void) {
    int n, i;
    printf("Informe um número que você deseja ver a tabuada: ");
    scanf("%d",&n);
    printf("Tabuada do %d:\n", n);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}