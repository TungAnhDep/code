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
    	cin.ignore();
    	int a[n+1][n+1];
    	memset(a,0,sizeof(a));
    	for (int i=1;i<=n;i++){
    		string s;string num; getline(cin,s);
			stringstream ss(s);
			while (ss >> num){
				a[i][stoi(num)]=1;
			} 
		}
		for (int i=1;i<=n;i++){
			for (int j=1;j<=n;j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		
	}
}

