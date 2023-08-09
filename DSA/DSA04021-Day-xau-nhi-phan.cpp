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
vector <ll> v(100);


string Try(int n, ll k)
	{
		if (n==1) return "0";
		if (n==2) return "1";
		if (k<=v[n-2]) return Try(n-2,k);
		return Try(n-1,k-v[n-2]);
	}
int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--){
    	int n;ll k;
    	cin >> n >> k;
    	v[0]=0; v[1]=1; v[2]=1;
    	for (int i=3;i<=n;i++)
    		{
    			v[i]=v[i-2] + v[i-1];
			}
		cout << Try(n,k) << endl;	
		v.clear();
	}
}
