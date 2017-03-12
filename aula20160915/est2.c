#include <stdio.h>
#include <math.h>
#define RECEBE(c,p) \
({printf("Digite a coord. x do ponto %s: ", c); \
    scanf("%f", &p.x); \
    printf("Digite a coord. y do ponto %s: ", c);\
    scanf("%f", &p.y);\
    printf("Digite a coord. z do ponto %s: ", c); \
    scanf("%f", &p.z);})
#define SOMA(a,b,s)\
({s.x=a.x+b.x;\
s.y=a.y+b.y;\
s.z=a.z+b.z;})
#define MOSTRA(p)\
({printf("(%g,%g,%g)\n",\
         p.x, p.y, p.z);})
#define DISTANCIA(a,b) \
sqrt(pow(a.x-b.x,2.0)+pow(a.y-b.y,2.0)+pow(a.z-b.z,2.0))
struct Ponto {
float x;
float y;
float z;};
int main (){
    struct Ponto A, B, S;
    float distancia;
    RECEBE("A", A);
    RECEBE ("B", B);
    SOMA (A, B,S);
    MOSTRA (S);
    distancia= DISTANCIA(A,B);
    printf ("A distancia entre eles: %g\n", distancia);
    return 0;}
