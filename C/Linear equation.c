#include<stdio.h>
#include<math.h>
int main()
	{
		float a,b;
		float x;
		scanf("%f %f",&a,&b);
		if (a==0)
			{
				if (b==0) printf("Infinite solutions");
				else printf ("No solution");
			}
		else 
			printf ("%0.2f\n",-b/a);
		return 0;
	}	