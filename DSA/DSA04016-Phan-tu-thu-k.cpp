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
    	int m,n,k; cin >> m >> n >> k; 
    	vector <int> a(m);
    	vector <int> b(n);
    	for (int i=0;i<m;i++) cin >> a[i];
    	for (int i=0;i<n;i++) cin >> b[i];
    	sort(a.begin(),a.end());
    	sort(b.begin(),b.end());
    	vector <int> c(n+m);
    	int i=0,j=0,l=0;
    	while (i<m && j<n)
    		{
    			if (a[i]<=b[j])
    				{
    					c[l]=a[i]; i++; l++;
					}
				else 
					{
						c[l]=b[j]; j++; l++;
						}	
			}
		while (i<m)
			{
				c[l]=a[i]; i++; l++;
			}	
		while (j<n)
			{
				c[l]=b[j]; j++; j++;
			}	
		//for (int i=0;i<c.size();i++) cout << c[i] <<" ";
		cout << c[k-1] << endl;	
	}
		
}

