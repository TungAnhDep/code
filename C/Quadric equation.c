#include <stdio.h>
#include <math.h>
int main()
	{
		float a,b,c;
		float x1,x2;
		scanf ("%f %f %f",&a,&b,&c);
		
		if (a!=0)
			{
				float delta=b*b-4*a*c;
				if (delta<0) printf ("NO\n");
				else if (delta==0)
					{
						x1=x2=-b/(2*a);
						printf ("%0.2f\n",x1);
					}
				else
					{
						delta=sqrt(delta);
						x1=(-b+delta)/(2*a);
						x2=(-b-delta)/(2*a);
						printf ("%0.2f %0.2f\n",x1,x2);
					}
			}
		else 
			{
				x1=x2=-c/b;
				printf ("%0.2f\n",x1);
				}	
	}