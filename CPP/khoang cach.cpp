#include <iostream>
#include <math.h>
using namespace std;
int main()
	{
		int t;
		do
			{
				cin >>t;
			} while(t<=0||t>20);
		while (t--)
			{
				double a,b,c,d;
				cin >>a>>b>>c>>d;
				double za=(c-a)*(c-a);
				double zb=(d-b)*(d-b);
				double z=sqrt(za+zb);
				printf ("%0.4f\n",z);
				}	
	}