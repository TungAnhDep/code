#include <stdio.h>
unsigned long long int UCLN(unsigned long long int a, unsigned long long int b)
	{
		if (a==0||b==0) return a+b;
		while (a!=b)
			{
				if (a>b) a=a-b;
				else b=b-a;
				
			}
		return a;	
	}
int main()
	{
		int t;
		scanf("%d",&t);
		unsigned long long int a,b;
		for (int i=0;i<t;i++)
			{
				scanf("%llu %llu",&a,&b);
				UCLN(a,b);
				printf("%llu\n",UCLN(a,b));
			}
		}	