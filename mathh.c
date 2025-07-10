#include <stdio.h>
#include <math.h>
#define PI 3.14
#define PI_RAD 3.14
#define PI_GRAUS 180
int main(void)
{
    float  angulo_graus; // em graus
    float ang_rad;
    printf("Informe o angulo.");
    scanf("%f", &angulo_graus);

    ang_rad=PI_RAD*angulo_graus/PI_GRAUS;

    printf("O seno de %f eh %f\n", angulo_graus, sin(ang_rad));
    printf("O cosseno de %f eh %f\n", angulo_graus, cos(ang_rad));
    printf("a tangente de %f eh %f\n", angulo_graus, tan(ang_rad));
   
    return 0;





}