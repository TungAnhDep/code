#include <bits/stdc++.h>
using namespace std;
int n,a[1000];
void sinh()
    {
        int i=n-1;
        while (i>=1 && a[i]>a[i+1])
            {
                i--;
            }
        if (i==0)
            {
                for (int j=1;j<=n;j++) cout << j <<" ";
            }    
        else
            {
                int j=n;
                while (a[i]>a[j]) j--;
                swap(a[i],a[j]);
                int l=i+1;
                int r=n;
                while (l<r)
                    {
                        swap(a[l],a[r]);
                        l++;
                        r--;
                    }
                for (int i=1;i<=n;i++) cout << a[i]<<" ";    
            }    
    }
int main()
    {
        int t;
        cin >> t;
        while (t--)
            {
                cin >> n;
                for (int i=1;i<=n;i++) cin >> a[i];
                sinh();
                cout << endl;
            }
    }    