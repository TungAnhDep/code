#include <stdio.h>
int main()
	{
		int n;
		scanf ("%d",&n);
		int odd,even,digit;
		odd=0;
		even=0;
		while (n>0)
			{
				
				digit=n%10;
				if (digit%2==0) even++;
				else odd++;
				n/=10;
			}
		printf ("%d %d\n",odd,even);	
	}