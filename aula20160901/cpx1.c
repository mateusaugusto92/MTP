#include <stdio.h>
#include <complex.h>
int main(){
    double complex z1, z2, soma, prod;
    double preal, pimag;
    printf ("real de z1:");
    scanf ("%lf", &preal);
    printf ("imag de z1:");
    scanf ("%lf", &pimag);
    z1 = preal + pimag * I;
    printf("real de z2:");
    scanf("%lf", &preal);
    printf("imag de z2");
    scanf ("%lf", &pimag);
    z2 = preal + pimag * I;
    soma = z1 + z2;
    prod = z1 *z2;
    printf ("soma: %lf + %lf i \n", creal(soma), cimag(soma));
    printf ("soma: %lf /_ %lf rad \n", cabs(soma), carg(soma));
    printf ("prod: %lf + %lf i \n", creal(prod), cimag(prod));
    printf ("prod: %lf /_ %lf rad \n", cabs(prod), carg(prod));
    return 0;

}
