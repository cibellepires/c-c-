#include <stdio.h>
int main (void){
    int x;
    printf("Informe um numero: ");
    scanf("%d", &x);


    if (x%2==0){ printf ("O numero %d eh par\n", x); }

    else { printf ("O numero %d eh impar\n", x); }

    return 0;

}