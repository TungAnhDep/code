#include <stdio.h>
#include <math.h>
void nhap(int a[],int n)
	{
		for (int i=0;i<n;i++)
			scanf ("%d",&a[i]);
	}

int kiemtra(int n)
	{
		if (n<2) return 0;
		for (int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;	
	}
int count(int a[],int n)
	{
		int prime=0;
		for (int i=0;i<n;i++)
		
		{
		if (kiemtra(a[i]))
			{
				prime++;
			}
		}
		printf ("%d ",prime);
		return prime;		
				}		
void insonguyento(int a[],int n)
	{
		for (int i=0;i<n;i++)
			{
				if (kiemtra(a[i])) printf ("%d ",a[i]);
			
			}
					}				
int main()
	{	int a[100];
		int n;
		
		do
			{
				scanf ("%d",&n);
			} while (n<1||n>100); 
		
		nhap(a,n);
		int dem = count(a,n);
		if (dem>0) insonguyento(a,n);}
							