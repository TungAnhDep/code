#include <stdio.h>
int main()
	{
		unsigned long long int a;
		scanf("%llu",&a);
		int digit,product;
		product=1;
		while (a>0)
			{
				
				
				product=product*(a%10);
				
				
				a/=10;
				
			}
		printf("%d\n",product);	
	}