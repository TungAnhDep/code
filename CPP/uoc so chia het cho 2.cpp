#include <iostream>
using namespace std;
int main()
	{
		int t;
		cin >>t;
		while (t--)
			{
				long long n;
				cin >>n;
				int count=0;
				for (long long i=1;i<=n;i++)
					{
						if (n%i==0&&i%2==0) count++; 
							
					}
				cout <<count<<endl;	
			}
	}
