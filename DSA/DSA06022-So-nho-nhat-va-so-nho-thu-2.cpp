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
    int t; cin >> t;
    while (t--){
    	int n; cin >> n;
    	int a[n];
    	for (int &x:a) cin >> x;
    	sort(a,a+n);
    	int res=0, cnt=0;
    	for (int i=0;i<n;i++)
    		{
    			if (a[i]==a[i+1]) cnt++;
    			else if (a[i] !=a[i+1])
    				{
    					res = a[i+1]; break;
					}
			}
		if (cnt==n-1) cout <<-1 ;
		else cout << a[0] << " " << res;
		cout << endl;	
	}
}

