#include <stdio.h>
int main()
	{
		int n,count=0,x;
		scanf ("%d",&n);
		int a[n];
		for (int i=0;i<n;i++)
			{
				scanf ("%d",&a[i]);
			}
		int k;
		scanf ("%d",&k);
		for (int i=0;i<n;i++)
			{
				if (a[i]%k==0)
					{
						count++;
						x=i;
						break;
					}
				}
		if (count!=0)
		{
			for (int i=0;i<n;i++)
				{
					if (i!=x) {
						printf ("%d ",a[i]);
					}
				}
					}
		else 
			{
				printf ("-1");
									}						
	}