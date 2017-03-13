#include<stdio.h>
int somar(int *A, int n);
int main()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int n = sizeof(A)/sizeof(int);
	printf("O resultado e': %d",somar(A,n));
	return 0;
}
int somar(int *A,int n)
{
	return(n==0)? 0 : (A[n-1] + somar(A,n-1));
}
