#include <stdio.h>
int main(){
    float base, altura, areat;
    printf("Informe os valores da base a da altura do triangulo\n");
    scanf("%f%f", &base, &altura);
    areat = (base * altura)/2;
    printf("\nA area do triangulo é: %.4f\n", areat);
return 0;
}
