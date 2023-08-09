#include <stdio.h>

int main()
	{
		int t;
		scanf ("%d",&t);
		int n;
		unsigned long long int max,min,a,b;
		int count=0;
		int dem=0;
		while (t>0)
			{
				
				scanf ("%llu %llu",&a,&b);
		
				if (a>b)
					{
						max=a;min=b;}
				else 
					{
						max=b;min=a;
							}	
				
				for (int j=min;j<=max;j++){
					for (int k=1;k<=j;k++){
						if (j%k==0){
							count++;
						}
						if (count>4){
							break;
						}
					}
				if (count==4){
					dem++;
				}
				count=0;		
				}
			
			printf ("%d\n",dem);
			t--;}
			}	
		
						
										
			
	