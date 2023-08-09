#include <stdio.h>
#include <dos.h>
void taomang(int A[100][100],int m, int n)
	{
		int i,j;
		for (i=0;i<m;i++)
			{
				for (j=0;j<n;j++){
						
						scanf("%d",&A[i][j]);
					}
			}
	}
void chuyenvi(int A[100][100],int m,int n)
	{
		int i,j,temp;
		for (i=0;i<m;i++)
			{
				for (j=0;j<n;j++)
					{
						temp = A[i][j];
						A[i][j]=A[j][i];
						A[j][i]=temp;
					}
			}
		}	
void inmatran(int A[100][100],int m,int n)
	{
		int i,j;
		for (i=0;i<m;i++)
			{	printf("\n");
				for (j=0;j<n;j++) printf ("%d ",A[i][j]);
			}
	}
int main()
	{
		int m,n;
		scanf ("%d %d",&m,&n);
		int A[100][100];
		taomang(A,m,n);
		chuyenvi(A,m,n);
		inmatran(A,m,n);
		}	
					