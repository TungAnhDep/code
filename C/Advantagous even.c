#include <stdio.h>
int main()
	{
		int t,odd,even,digit;
		unsigned long long int num;
		scanf ("%d",&t);
		while (t>0)
			{	odd=0;
				even = 0;
				scanf("%llu",&num);
				if (num%2!=0)
					{
						printf ("NO\n");
						goto here;
					}
				else 
				{
					while (num>0)
					{
						digit=num%10;
						if (digit%2==0) even++;
						else odd++;
						num=num/10;
					}
				if (even>odd) printf ("YES\n");
				else printf ("NO\n");	
					}	
				here:t--;	
			}
	}