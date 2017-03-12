#include <stdio.h>
int main (){
   int i;
    double  num1;
    int num;
    float num2;
    printf ("Digite um numero inteiro:\n");
    scanf("%d", &num);

    num1=0;
    num2=0;
    for (i=0; i<729;i++)
        num1=num1+1.0/num;;
    for (i=0; i<729;i++)
        num2=num2+1.0f/num;;
    printf("O resultado e'= %.15g e %.15g", num1, num2);
return 0;
}
