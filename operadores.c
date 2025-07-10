#include <stdio.h>
//verificar se um triangulo é valido e o seu tipo
int main(void) { 
    int a, b,c; // lados do triangulo
    printf("Digite o valor do lado A: ");
    scanf("%d", &a);
    printf("Digite o valor do lado B: ");
    scanf("%d", &b);
    printf("Digite o valor do lado C: ");
    scanf("%d", &c);
     
    if ((a<b+c) && (b<c+a) && (c<a+b) && (a>0) && (b>0) && (c>0)){

       if ((a==b) && (b==c)) {printf("Triangulo Equilatero\n");}

       else if ((a!=b) && (b!=c) && (a!=c)) {printf("Triangulo Escaleno\n");}

       else {printf("Triangulo Isosceles\n");}

    }

    else
        {printf("Triangulo Invalido\n");}
    return 0;





}