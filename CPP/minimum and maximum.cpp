#include <bits/stdc++.h>
using namespace std;
int replace(int x,int first,int second)


	{
		int multiply=1;
		int result=0;
		while (x>0)
			{
				int digit=x%10;
				if (digit==first) result+=second *multiply;
				else result+=digit*multiply;
				multiply*=10;
				x/=10;
			}
		return result;	
	}
void calculate(int x1,int x2)
	{
		int min=replace(x1,6,5)+replace(x2,6,5);
		int max=replace(x1,5,6)+replace(x2,5,6);
		cout<<min<<" "<<max<<endl;
		}	
int main()
	{
		int t;
		cin>>t;
		int x1;
		int x2;
		while (t--)
			{
				cin>>x1>>x2;
				calculate(x1,x2);
			}
			}		