#include <stdio.h>
int main()
	{
		int t;
		scanf("%d",&t);
		unsigned long long int a;
		int i;
		
		for (i=0;i<t;i++)
			{
				scanf("%llu",&a);
				int j=0;
				int count=0;
				while (j*j<=a)
					{
						if (j*j==a) count ++;
						j++;
							
						
				
			}
		if (count ==0) printf("NO\n");
		else printf ("YES\n");	

		
	}
}