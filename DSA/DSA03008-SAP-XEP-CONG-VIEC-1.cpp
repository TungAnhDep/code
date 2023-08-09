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
struct job{
	int fi,se;
};
job h[1005];
bool cmp(job a, job b){
	return a.se < b.se;
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
    		for (int i=0;i<n;i++) cin >> h[i].fi;
    		for (int i=0;i<n;i++) cin >> h[i].se;
    		sort(h,h+n,cmp);
    		int d=1, i = 0; // i: cong viec dung truoc, d: so luong cong viec
    		for (int j=1;j<n;j++)
    			{
    				if (h[j].fi >= h[i].se) // Thoi gian bat dau cong viec sau lon hon tgian ket thuc cv truoc
    					{
    						d++;
    						i=j;
						}
				}
			cout << d << endl;	
		}
}

