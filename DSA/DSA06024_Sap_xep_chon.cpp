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
    {
       
                int n; cin >> n;
                int a[n];
                for (int  &x:a) cin >> x;
                for (int i=0;i<n-1;i++)
                    {
                        int min=i;
                        for (int j=i+1;j<n;j++)
                            {
                                if (a[j] < a[min]) 
                                    {   
                                       min=j;
                                        
                                    }
                                
                            }
                        swap(a[i],a[min]);
                        cout <<"Buoc "<< i+1 <<": ";
                        for (int k=0;k<n;k++) cout <<a[k] <<" ";
                        cout << endl;    
                    }
            
    }
