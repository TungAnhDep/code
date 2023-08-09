#include <stdio.h>
int main()
	{
		int num,fact,sum,temp,i,digit;
		scanf ("%d",&num);
		sum=0;
		temp=num;
		while (num>0)
			{
				i=1,fact=1;
				digit=num%10;
				while (i<=digit)
					{
						fact*=i;
						i++;
					}
				sum=sum+fact;
				num/=10;	
			}
		if (sum==temp) printf ("1");
		else printf ("0");
		return 0;		
	}