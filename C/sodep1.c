#include <stdio.h>
#include <math.h>
int prime(int n)
	{
		if (n<2) return 0;
		for (int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;
	}
int fibonacci(int n)
	{
		int f0=0;
		int f1=1;
		int fn=1;
		if (n<0) return 0;
		if (n==0||n==1) return n;
		else 
			{
				for (int i=2;i<n;i++)
					{
						f0=f1;
						f1=fn;
						fn=f0+f1;
					}
			}
		return fn;	
		}
int tong(int n)
	{	int digit,sum=0;
		while (n>0)
		{
			digit=n%10;
			sum+=digit;
			n/=10;
								
		}	
	return sum;	
	}
		
		
		
	
		
		
int main()
	{
		int a,b;
		scanf ("%d %d",&a,&b);
		int max,min;
		
		if (a>b) 
			{
				max=a;
				min=b;
			}
		
		else 
			{
				min=a;
				max=b;
			}
		for (int i=min;i<=max;i++)
			{
				if (prime(i))
					{
						
						for (int j=1;j<35;j++)
							{
								if (tong(i)==fibonacci(j)) printf ("%d ",i);
								}	
						
					}
			 } 
}
			
		