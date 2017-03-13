#include<stdio.h>
int idem(int *A, int *B, int n, int m,int *C);
int main()
{

	int A[]={1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int n=sizeof(A)/sizeof(int);
	int B[]={1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int m = sizeof(B)/sizeof(int);
	int C[32];
	int i=0,x=0;
	x=idem(A,B,n,m,C);
	for(i=0;i<x;i++)
	{
		printf("%d ",C[i]);
	}
	return 0;
}
int idem(int *A, int *B, int n, int m,int *C)
{
	int i=0,j=0,k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{

		if(A[i]==B[j])
		{
			C[k]=A[i];
			k++;
		}
	}
}
	C[k]='\0';
	return k;
}
