#include <stdio.h>
main()
	{
		int t, i;
		scanf("%d", &t);
		for (i=0; i<t; i++)
			{
				int n, j, k;
				scanf("%d", &n);
				long int a[n];
				for (j=0; j<n; j++)
					{
						scanf("%ld ", &a[j]);
					}
				for (j=0; j<n-1; j++)
					{
						int count=0;
						for (k=j+1; k<n; k++)
							{
								if (a[j]<=a[k])
									{
										count+=1;
										break;
									}
							}
						if (count==0)
							{
								printf("%ld ", a[j]);
							}
					}
				printf("%ld ", a[n-1]);	
				printf("\n");
			}
	}