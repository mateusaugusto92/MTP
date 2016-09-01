#include <stdio.h>
#include <math.h>
int main(){
    double numero, base, logaritmo;
    printf ("informe o numero:");
    scanf ("%lf", &numero);
    printf ("informe a base:");
    scanf ("%lf", &base);
    logaritmo = log10(numero) / log10(base);
    printf ("O logaritmo de %lf na base %lf e: %lf\n", numero, base, logaritmo);
    return 0;

}
