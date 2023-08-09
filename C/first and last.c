#include <stdio.h>
int socuoi(int n)
	{
		return (n%10);	
	}
int sodau(int n)
	{
		while (n>=10)
			{
				n/=10;
			}
		return n;	
	}
int main()
	{
		int t,num;
		scanf("%d",&t);
		for (int i=0;i<t;i++)
			{
				scanf ("%d",&num);
				int a=socuoi(num);
				int b=sodau(num);
				if (a==b) printf ("YES\n");
				else printf ("NO\n");
			}
				}			