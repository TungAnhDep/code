#include <iostream>
using namespace std;
int main()
	{
		long long a;
		cin >>a;
		int tong=0;
		int fact=1;
		for (int i=1;i<=a;i++)
			{
				fact=fact*i;
				tong=tong+fact;
			}
		cout <<tong<<endl;	
	}
