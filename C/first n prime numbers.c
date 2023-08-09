#include <stdio.h>
#include <math.h>
int demsonguyento (int n)
{
	if (n<2) return 0;

	for (int i=2;i<=(sqrt(n));i++){
		
			if (n%i==0) return 0;}
		return 1;
		
}
int main()
{
	int n;
	int a;
	a=2;
	scanf ("%d",&n);
	int i=0;
	while (i<n)
	{
		if (demsonguyento(a)) 
		{
			printf("\n%d",a);
			i++;
		}
	a++;	
	}
	
	
	
		
}