#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int num2[10];

    for (i=0; i<10; i++)
       num2[i] = rand();
    printf("\n\n");
    for (i=0; i<10; i++){
        printf("%d", num2[i]);
    printf("\n\n");
    }
}