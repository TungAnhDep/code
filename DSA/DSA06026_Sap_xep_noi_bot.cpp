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
    	int a[n];
    	for (int &x:a) cin >> x;
    	
    	int k=0;
		for (int i=0;i<n-1;i++)
		{	bool ok=false;
			for (int j=0;j<n-i-1;j++){
				if (a[j] > a[j+1]){
					swap(a[j],a[j+1]);
					ok=true;
				}
				
			
			}
				if (ok){
					cout << "Buoc "<< k+1 <<": ";
				
					for (int x:a) cout << x <<" ";
					k++;
					cout << endl;
					
				} 
				else break;
		 } 
	
}

