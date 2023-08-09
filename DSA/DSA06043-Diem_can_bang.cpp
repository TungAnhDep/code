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
    	int ans=-1, sum=0, sum_be=0;
    	for (int i=0;i<n;i++) sum+=a[i];
    	for (int i=0;i<n;i++){
    		if(sum_be*2+a[i]==sum){
    			ans=i+1;
			}
			else{
				sum_be+=a[i];
			}
		}
		cout << ans << endl;
	}
}

