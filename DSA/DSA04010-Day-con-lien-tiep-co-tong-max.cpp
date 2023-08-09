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
   		int a[n+5];
   		for (int i=1;i<=n;i++) cin >> a[i];
   		int sum=0;
   		int res=0;
   		for (int i=1;i<=n;i++){
   			sum=max(a[i], sum+a[i]);
   			res = max(res,sum);
		   }
		cout << res << endl;   
	   }
    
}

