#include <iostream>
#include <math.h>
using namespace std;
int nto(int n)
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
		while (t--)
			{
				int n;
				cin >>n;
				int dem=0;
				for (int i=1;i<=n/2;i++)
					{
						if (nto(i)&&nto(n-i)){
						cout <<i<<" "<<n-i<<endl;
						dem=1;
						break;
					}
					}
				if (dem==0)	 cout<<"-1"<<endl;
			}
		}	