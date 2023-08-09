#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int e;
    scanf("%d",&n);
    while(n--)
    {
        int n1, n2, n3, n4, i, gcd1, gcd2;
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

        for(i=1; i <= n1 && i <= n2; ++i)
        {
            if(n1%i==0 && n2%i==0)
            gcd1 = i;
        }

        for(i=1; i <= n3 && i <= n4; ++i)
        {
            if(n3%i==0 && n4%i==0)
            gcd2 = i;
        }

        if(gcd1==gcd2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}