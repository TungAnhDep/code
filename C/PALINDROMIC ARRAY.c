#include <stdio.h>
void nhapmang(unsigned long long int A[],int *n)
	{	do
		{
	
		scanf("%d",n);}
		while(*n<0 && *n>100);
		for (int i=0;i<*n;i++)
			scanf("%llu",&A[i]);
	}
int kiemtra(unsigned long long int A[],int n)
	{
		int k;
		int count=0;
		for (k=0;k<n;k++)
		{	if (A[k]!=A[n-1-k]) count ++;
		}	
		if (count==0) printf ("YES\n");
		else printf("NO\n");}
		
int main()
	{
		int t;
		scanf("%d",&t);
		int n;
		unsigned long long int A[100];
		while (t>0)
			{
				
				nhapmang(A,&n);
				kiemtra(A,n);
				t--;
			}
	}		