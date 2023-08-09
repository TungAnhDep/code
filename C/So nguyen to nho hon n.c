#include <stdio.h>
#include <math.h>
int tim(int n)
{
	if (n<2) return 0;
	for (int i=2; i<=(sqrt(n));i++)
		{
			if (n%i==0) return 0;
		}
	return 1;	
}
void in(int a,int n)
	{
		while (a<n)
			{
				if (tim(a)) printf ("\n%d",a);
				a++;
			}
	}

int main()
	{
		int n,a=2;
		int i=0;
		scanf ("%d",&n);
		in (a,n);
		
	}