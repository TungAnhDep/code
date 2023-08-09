#include <stdio.h>

int main()
	{
		int num;
		scanf("%d",&num);
		int thuong,i,sum=0;
		for (i=1;i<num;i++)
			{
				thuong=num%i;
				if (thuong==0) sum=sum+i;
			}
		if (sum==num) printf ("1");
		else printf ("0");	
		return 0;
	}