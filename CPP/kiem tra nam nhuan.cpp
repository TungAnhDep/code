#include <iostream>
using namespace std;
int main()
	{
		int n;
		cin >>n;
		if (n<=0) cout <<"INVALID"<<endl;
		else if (n%400==0||(n%4==0 && n%100 !=0))
			{
				cout <<"YES"<<endl;
			}
		else cout <<"NO"<<endl;	
	}
