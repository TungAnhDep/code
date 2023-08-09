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
    vector<pair<int,int>> edges;
    for (int i=1;i<=n;i++){
    	string s,num;
    	getline(cin,s);
    	stringstream ss(s);
    	while (ss>>num){
    		edges.push_back({i,stoi(num)});
		}
	}
	for (auto it:edges){
		if(it.first <= it.second) cout << it.first <<" " << it.second << endl;
	}
}

