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
struct data{
	int id,ded,pro;
};
bool cmp(data a, data b)
	{
		return a.pro > b.pro;
	}
	
int main()
{
 	ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--)
    	{
    		int n; cin >> n;
    		data a[1001];
    		for (int i=0;i<n;i++) cin >> a[i].id >> a[i].ded >> a[i].pro;
    		int f[1001]={0}; // Danh dau xem cong viec da lam chua
    		int res=0,d=0; 
    		sort(a,a+n,cmp);
    		for (int i=0;i<n;i++)
    			{
    				while (f[a[i].ded] && a[i].ded >0) a[i].ded-=1;
    				if (!f[a[i].ded] && a[i].ded >0)
    					{
    						f[a[i].ded]=1;
    						res+=a[i].pro;
    						d++;
						}
				}
			cout << d <<" " << res << endl;	
		}
}

