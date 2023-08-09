#include <stdio.h>
int main()
{
	int n;
	scanf ("%d",&n);
	unsigned long long int a;
	for (int i=0;i<n;i++)
		{
			scanf("%llu",&a);
			unsigned long long int b=a*a;
			printf("%llu\n",b);
		}
	
		
}