#include <stdio.h>
int binomial(int a, int n);
int main() {
  int total, retira;
   printf("Quantas bolas são? Quantas devem ser retiradas?\n");
   scanf("%d%d", &total, &retira);
  printf("De um total de %d bolas, para retirar %d temos %d possibilidades.\n",
    total, retira, binomial(total, retira));
  return 0;
}
int binomial(int a, int n) {
  if(n == 0)
    return 1;
  else
    return a*binomial(a-1, n-1)/n;
}
