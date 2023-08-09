#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
	{	ios::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
	
				int n; cin >> n;
				int a[n];
				for (int &x : a) 
					cin >> x;
				sort (a,a+n);
				//So sanh tich 2 so nho nhat
				int tich1=a[0]*a[1];
				//So sanh tich 2 so lon nhat
				int tich2= a[n-1]*a[n-2];
				//So sanh tich 3 so lon nhat
				int tich3=tich2*a[n-3];
				//So sanh tich 2 so lon nhat voi 1 so nho nhat
				int tich4 = tich1*a[n-1];
				vector<int> v;
				v.push_back(tich1);
				v.push_back(tich2);
				v.push_back(tich3);
				v.push_back(tich4);
				sort(v.begin(),v.end(),greater<int>());
				cout << v[0];
			
		}	
