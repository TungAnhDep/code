#include <stdio.h>
int main()
	{
		int t;
		unsigned long long int digit;
		unsigned long long int sum=0;
		scanf("%d",&t);
		unsigned long long int num;
		while (t>0)
			{	
				scanf("%llu",&num);
				while (num>0)
					{
						digit=num%10;
						sum+=digit;
						num=num/10;
						
					}
					
				printf("%llu ",sum);
				t--;
			
			}
		
	}
		