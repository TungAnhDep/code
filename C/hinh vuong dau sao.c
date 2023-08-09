#include <stdio.h>
int main()
	{	int n;
		do
			{
				scanf ("%d",&n);
					
			} while (n<0||n>100);
		for (int i=1;i<=n;i++)
			{
				for (int j=1;j<=n;j++)
					{
						printf ("*");
					}
				printf ("\n");	
				}	
	}