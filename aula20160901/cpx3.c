#include <stdio.h>
#include <complex.h>
int main (){
    double complex Z1;
    double preal, pimag;
    printf("Real de Z1: ");
    scanf ("%lf", &preal);
    printf("Imag de Z1: ");
    scanf ("%lf", &pimag);
    Z1=preal+pimag*I;
    printf ("A raiz e' %g%+gi\n",creal(csqrt(Z1)), cimag(csqrt(Z1)));
return 0;}
