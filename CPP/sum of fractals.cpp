#include <iostream>
using namespace std;
int main()
	{
		long long int n,s;
		s=0;
		long long int p=1;
		do
			cin>>n; 
			while (n<1||n>20);
		
		for (int i=1;i<=n;i++)
			{	p=p*i;
				s=s+p;
				}
		cout<<s<<endl;
		return 0;			
			
	}