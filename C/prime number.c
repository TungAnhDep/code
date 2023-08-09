#include <stdio.h>
#include <math.h>
int main()
	{
		int t;
		scanf("%d",&t);
		unsigned long long int a;
		int j;
	
		for (int i=0;i<t;i++)
			{
				scanf("%llu",&a);
				if (a<2)
				{
					printf ("NO\n");
					
					return 0;
					
				}
				
					int count =0;
				
				for (j=2;j<=sqrt(a);j++)
					{
						if (a%j==0) 
						{
						count ++;
						
					}
						
								
					}
			
			if (count ==0) printf ("YES\n");
			else printf("NO\n");
					
					
				
				
			}
		
			
	}
	   