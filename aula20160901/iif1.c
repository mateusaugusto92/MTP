#include <stdio.h>
#include <float.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int i;
   if (1.0 > 1.0 - DBL_EPSILON/4.0)
    printf("maior\n");
   else
    printf("igual?!?!?! delta = %le", DBL_EPSILON/4.0 );
    for(i = 0; i<10; i++)
        printf ("%g\n", (float)rand()/(float)RAND_MAX);
    return 0;

}
