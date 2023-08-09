#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
const ll mod = 10e7+9;
using namespace std;

int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n; cin >> n;
    ll a[n+5];
    for (int i=1;i<=n;i++)
    	{
    		cin >> a[i];
		}
	vector <ll> le,chan;
	for (int i=1;i<=n;i+=2) le.push_back(a[i]);	
	for (int i=2;i<=n;i+=2) chan.push_back(a[i]);
	sort(le.begin(),le.end());
	sort(chan.begin(), chan.end(), greater<ll>());
	if (n%2==0)
		{
			for (int i=0;i<le.size()-1;i++)
				{
					cout << le[i] <<" " << chan[i]<<" ";
				}
			cout << le[le.size()-1] <<" " << chan[le.size()-1];	
		}
	else
		{
			for (int i=0;i<chan.size();i++)
				{
					cout << le[i] <<" "<< chan[i] <<" ";
				}
			cout << le[le.size()-1];	
		}	
	cout << endl;	
}

