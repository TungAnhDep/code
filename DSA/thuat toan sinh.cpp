#include <bits/stdc++.h>
using namespace std;
int n,i,a[10000]; bool ok;
void ktao()
    {
        for (i=1;i<=n;i++)
            {
                a[i]={0};    
            }
    }
void sinh()
    {
        i=n;
        while (i>=1 && a[i]==1)
            {
                a[i]=0;
                i--;
            }
        if (i==0)
            {
                ok=false;
            }    
        else
            {
                a[i]=1;
            }   
    }
int check()
    {   int count=0;
        for (int i=1;i<=n;i++)
            {
                if (a[i]!=a[n-i+1])
                    {
                       return 0;
                    }
            }
        return 1;    
    }  
int main()
    {
        cin >> n;
        ok=1;
        ktao();
        while (ok)
            {
               if (check())
                {   for (int i=1;i<=n;i++)
                    {   
                        cout << a[i] <<" ";
                    
                    }
                cout <<endl;
                
                }   
             sinh();     
            }
    }
    