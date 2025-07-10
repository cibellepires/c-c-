// soma da serie S= 1+1/2+1/3+...+1/n
#include <stdio.h>
int main(void){
    int n, i;
    float soma= 0.0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){ soma=soma+1.0/i;}
    printf("Soma da serie S= 1+1/2+1/3+...+1/%d = %.2f\n", n, soma);
    return 0;
}