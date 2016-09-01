#include <stdio.h>
#include <math.h>
int main(){
    double x1, x2, y1, y2, distancia;
    printf ("Informe X1:\n");
    scanf ("%lf", &x1);
    printf ("Informe Y1:\n");
    scanf ("%lf", &y1);
    printf ("Informe X2:\n");
    scanf ("%lf", &x2);
     printf ("Informe Y2:\n");
    scanf ("%lf", &y2);
    distancia = sqrt ((pow(x2 - x1, 2)) + (pow(y2 - y1, 2)));
    printf ("A distancia entre os pontos é: %lf.\n", distancia);
    return 0;

}
