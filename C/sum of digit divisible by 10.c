#include <stdio.h>

void chiahetcho10(int n)
	{
		if (n%10==0) printf("YES\n");
		else printf("NO\n");
		}	
int main()
	{
		int t;
		scanf("%d",&t);
		unsigned long long int a;
		int sum,digit;
		for (int i=0;i<t;i++)
			{
				scanf("%llu",&a);
				sum=0;
				while (a>0)
					{
						digit=a%10;
						sum+=digit;
						a/=10;
					}
				chiahetcho10(sum);
			}
	}
			