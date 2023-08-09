#include <iostream>
#include <math.h>
using namespace std;
int check(long long n)
	{
		if (n<2) return 0;
		for (int i=2;i<=sqrt(n);i++)
			{
				if (n%i==0) return 0;
			}
		return 1;	
	}
int main()
	{
		int t;
		cin >>t;
		while(t--)
			{
				long long n;
				
				cin>>n;
				if (check(n)) cout <<n<<endl;
				else
				{
				for (long long i=sqrt(n)*4;i>=2;i--)
					{
						if (n%i==0&&check(i)) 
							{
								cout <<i<<endl;
								break;
							}
					}
			}
			}
		}	
