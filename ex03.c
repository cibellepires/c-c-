// esse programa le um inteiro positivo n e em seguida mostra os inteiros de 1 até n
#include <stdio.h>
int main(void){
    int n, i;
    printf("Informe um número:");
    scanf("%d", &n);

    // para i de 1 até n
    for(i=1; i<=n; i++){
        printf("%d\n", i);
    }
}