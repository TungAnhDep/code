#include <stdio.h>
void taomang(int A[],int n)
{
	int i;
	for (i=0;i<n;i++) scanf ("%d",&A[i]);
}
void daomang(int A[],int n)
	{
		int i,temp;
		for (i=0;i<n/2;i++)
			{
				temp = A[i];
				A[i]=A[n-1-i];
				A[n-1-i]=temp;
			}
	}
void inmang(int A[],int n)
	{
		int i;
		for (i=0;i<n;i++) printf ("%d ",A[i]);
		}
int main()
{
	int n;
	scanf ("%d",&n);
	int A[n];
	taomang(A,n);
	daomang(A,n);
	inmang(A,n);
	return 0;
			}			