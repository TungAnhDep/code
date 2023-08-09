#include <stdio.h>
int socuoi(int n)
	{	printf ("%d\n",n%10);
		return n%10;
	}
int sodau(int n)
	{
		while (n>=10)
			{
				n/=10;
			}
		printf ("%d ",n);	
		return n;
		}	
int main()		
	{
		int n;
		scanf ("%d",&n);
		sodau(n);
		socuoi(n);
	}