#include <stdio.h>
int main()
	{
		int n,digit,sum=1;
		scanf ("%d",&n);
		while (n>0)
			{
				digit=n%10;
				sum*=digit;
				n/=10;
			}
		printf ("%d\n",sum);	
	}