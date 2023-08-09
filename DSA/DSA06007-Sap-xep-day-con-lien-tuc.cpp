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
   		for (int i=0;i<n;i++) cin >> a[i];
   		vector<int> b(a,a+n);
   		sort(b.begin(),b.end());
   		deque<int> dq;
   		for (int i=0;i<n;i++){
   			if (a[i]!=b[i]) dq.push_back(i+1);
		   }
		cout << dq.front() <<" " << dq.back()<< endl;   
}
}

