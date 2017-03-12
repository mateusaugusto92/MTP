#include <stdio.h>
#include <complex.h>

int main ()
{
 double complex Z1, mult;
double preal, pimag;
 printf("Real de Z1: ");
    scanf ("%lf", &preal);
    printf("Imag de Z1: ");
    scanf ("%lf", &pimag);
     Z1=preal+pimag*I;
     mult=Z1*(conj(Z1));
printf("%g\n",creal(mult));
    return 0;
}
