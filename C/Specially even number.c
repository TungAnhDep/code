#include <stdio.h>
int main()
{
    int t,digit;
    unsigned long long int num;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%llu",&num);
        if(num%2!=0)
        {
            printf("NO\n");
            goto go_here;
        }
        else 
        {
            while(num>0)
            {
                digit=num%10;
                if(digit%2!=0)
                {
                    printf("NO\n");
                    break;
                }
                num/=10;
                if(num==0)
                printf("YES\n");
            }
        }
    go_here:t--;
    }
}