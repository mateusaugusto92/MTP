#include <stdio.h>
#include <math.h>
#include <complex.h>
typedef struct guarda_raiz{
complex	float raiz1;
complex	float raiz2;

}estrutura;
float delta(float a, float b, float c);
estrutura raizes (float d, float a, float b, float c);
int main ()
{
	float a, b, c, d;
	estrutura raiz;
	printf("Digite os coeficientes da equacao quadratica:\n");
	scanf("%f %f %f", &a,&b,&c);
	d=	delta (a, b, c);
raiz=	raizes (d, a, b, c);
printf("A raiz 1 e: %g + %g i\n", creal(raiz.raiz1), cimag(raiz.raiz1));
printf("A raiz 2: %g + %g i\n", creal(raiz.raiz2), cimag(raiz.raiz2));
	return 0;
}
float delta(float a, float b, float c)
{

float deltacalculo;
deltacalculo=pow(b, 2) - 4*a*c;
return deltacalculo;
}

estrutura raizes (float d, float a, float b, float c)
{
estrutura x;
	if (d> 0)
	{
	 x.raiz1 = (-b + sqrt(d))/(2*a);
	 x.raiz2 = (-b - sqrt(d))/(2*a);
}
if (d== 0)
x.raiz1 = x.raiz2 = -b/(2*a);
if(d<0)
{

x.raiz1 = -b/(2*a) + I* sqrt(-d)/(2*a);
x.raiz2 = -b/(2*a) - I* sqrt(-d)/(2*a);
}
return x;
}
