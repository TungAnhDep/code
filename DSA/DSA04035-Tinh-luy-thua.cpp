#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#define ll long long
#define e 1000000007
using namespace std;
int a;
ll b;
ll Power(int a, int b)
	{	
		if (b==0) return 1;
		if (b==1) return a;
		ll p = Power(a,b/2);
		if (b%2==0)
			{
				return (p*p) % e;
				
				}	
		else return (((p*p)%e)*a)%e;	
	}
int main()
{
	for(int i=0;i<=20;i++){
		cin >> a >> b;
		if (a==0 && b==0) return 0;
		cout << Power(a,b) << endl;
	}
}

