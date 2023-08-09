#include <iostream>
#include <map>
#define ll long long
using namespace std;
int main()
	{
		int t;
		cin >>t;
		while (t--)
			{	map <ll, bool> mp;
				ll n; cin>>n;
				for (int i=0;i<n;i++)
					{
						int x; cin >>x;
						mp[x]= true;
					}
				for (int i=0;i<n;i++)
					{
						if (mp[i]) cout << i <<" ";
						else cout <<"-1 ";
						}	
				
				cout <<endl;		
			}
	}
