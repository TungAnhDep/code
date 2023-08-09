#include <stdio.h>
#include <math.h>
int kiemtra(int a)
	{
		int i=0;
		while (i*i<=a)
			{
				if (i*i==a) return 1;
				i++;
			}
		return 0;	
		}	
void main()	
	{
		int m,n;
		scanf("%d %d",&m,&n);
		int k;
		int count=0;
		for (k=m;k<=n;k++)
	
			{
				if (kiemtra(k)==1) count++;
			}
		printf("%d\n",count);		
		for (k=sqrt(m);k<=sqrt(n);k++)	
			{
				printf ("%d\n",k*k);
			}
		}	
	