#include <iostream>
#include <algorithm>
using namespace std;
int main()
	{
		int t;
		cin>>t;
		while(t--)
			{
				int n;
				cin>>n;
				int a[n];
				int k;
				cin>>k;
				for (int i=0;i<n;i++)
					{
						cin>>a[i];
					}
				sort(a,a+n);
				
				cout <<a[k-1]<<endl;	
			}
	}
