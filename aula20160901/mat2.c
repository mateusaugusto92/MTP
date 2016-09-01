#include <stdio.h>
#include <math.h>
int main(){
    float lado1, lado2, angulo, resultado;
    printf ("Informe a medida dos lados do triangulo;");
    scanf ("%f", &lado1);
    scanf ("%f", &lado2);
    printf ("Informe o angulo (em radianos)");
    scanf ("%f", &angulo);
    resultado = sqrt((pow (lado1, 2))+(pow (lado2,2))- 2 * lado1 * lado2 * cos(angulo));
    printf ("O valor da medida do lado e: %f", resultado);
    return 0;

}

