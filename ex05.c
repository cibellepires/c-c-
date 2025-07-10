//fatorial
#include <stdio.h>
int main(void){
    int n, i, fat;
    fat=1; // Inicializa o fatorial como 1
    printf("Informe um número para calcular o fatorial: ");
    scanf("%d", &n);
    for (i = n; i >=1; i--) {
        fat=fat*i;} // Multiplica o fatorial pelo valor atual de i
    printf(" o fatorial de %d! é %d",n, fat); // Imprime o fatorial atual
    return 0;
    

}
