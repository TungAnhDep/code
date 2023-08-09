#include <stdio.h>
int main()
	{
		int a,b;
		scanf ("%d %d",&a,&b);
		int max,min;
		if (a>b)
			{
				max=a;min=b;
			}
		else 
			{
				max=b;min=a;
				}	
		int sum=0;
		for (int i=min;i<=max;i++)
			{
				sum+=i;
					}	
		printf ("%d\n",sum);				
	}