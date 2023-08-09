#include <stdio.h>
int main()
	{
		int t;
		scanf("%d",&t);
		unsigned long long int n;
		int digit;
		int even,odd;
		
		for (int i=0;i<t;i++)
			{
				scanf("%llu",&n);
				even=0;
				odd=0;
				while (n>0)
				{
				
				digit=n%10;
				if(digit%2==0) even++;
				else odd++;
				n/=10;
				
				
			}
		printf ("%d %d\n",odd,even);	
			}
	}