#include <stdio.h>
void nhapmang(int A[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		scanf ("%d",&A[i]);
	}
}
void sapxepmang (int A[],int n)
	{
		int i,j,temp;
		for (i=0;i<n;i++)
		{
			for (j=i+1;j<n;j++)
				{
					if (A[i]>A[j])
						{
							temp = A[i];
							A[i]=A[j];
							A[j]=temp;
						}
				}
		}
	}
void inmang(int A[], int n)
{
	int i;
	for (i=0;i<n;i++)
		printf ("%d ",A[i]);
	}	
int main(){

	int n,A[100];
	scanf ("%d",&n);
	nhapmang(A,n);
	sapxepmang(A,n);
	inmang(A,n);
	return 0;}
		