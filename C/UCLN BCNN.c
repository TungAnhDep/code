#include <stdio.h>
unsigned long long int UCLN (unsigned long long int a, unsigned long long int b)
{
	while (a!=b)
		{
			if (a>b) a=a-b;
			else b=b-a;
		}
	return a;	
}
unsigned long long int BCNN (unsigned long long int a,unsigned long long int b){

	unsigned long long int ketqua = UCLN (a,b);
	return ((a*b)/ketqua);}
int main()
	{
		unsigned long long int a,b;
		scanf ("%llu %llu",&a,&b);
		printf ("%llu\n",UCLN(a,b));
		printf ("%llu\n",BCNN(a,b));
		return 0;
		}	
				