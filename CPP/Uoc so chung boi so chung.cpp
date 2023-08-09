#include <iostream>
using namespace std;
long long GCD(long long a,long long b)
	{
		if (a==1||b==1 ) return 1;
		while (a>0&&b>0)
			{
				if (a>b) a=a-b;
				else b=b-a;
			}
		return a;	
	}
long long LCM(long long a,long long b)
	{
		return (a*b)/GCD(a,b);
		}	
int main()
	{	int t;
		cin>>t;
		while (t--)
		{
		long long a,b;
		cin>>a>>b;
		cout <<LCM(a,b)<<" "<<GCD(a,b)<<endl;}
			}		
