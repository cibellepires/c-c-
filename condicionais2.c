#include <stdio.h>
int main(void) {
   int t1, t2, t3; //notas trabalho
   int p1, p2, p3; // nota provas
   float media_trabalho;
   float media_provas;
   float media_final;
   printf("Informe a nota nos 3 trabalhos: ");
   scanf(("%d %d %d"), &t1, &t2, &t3);
   printf("informe a nota das tres provas:");
   scanf("%d %d %d", &p1, &p2, &p3);
   media_trabalho=(t1+t2+t3)/3.0;
   media_provas=(p1+2*p2+3*p3)/6.0;
   media_final=(media_trabalho+media_provas)/2.0;
   
   if (media_final< 4.0) { printf("O aluno foi reprovado com media final %.2f\n", media_final);}
   else if (media_final >= 4.0 && media_final <= 6.0) {printf ("O aluno está de recuperação com media final %.2f\n", media_final);}
   else {printf ("o aluno foi aprovado com media final %.2f\n", media_final);}
   return 0;


}