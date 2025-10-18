#include <stdio.h>
#include <stdlib.h>

int main() {
    int  vet[10];

    int i, j, mat1[3][3]={1,2,3,4,5,6,7,8,9};
    char mat5[3][4]={'a','b','c','\0',
                     'd','e','f','\0',
                     'g','h','i','\0'};


   for (i=0; i<3; i++){
      for(j=0; j<3; j++)
         printf("%d", mat1[i][j]);
      printf("\n");
   }
    
    return 0;
}