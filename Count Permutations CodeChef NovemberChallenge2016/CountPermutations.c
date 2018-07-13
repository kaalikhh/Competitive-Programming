#include <stdio.h>
#include <stdlib.h>
long long per(long long a,long long b);

int main()
{
    long long int t,i,ans,n;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);

        if(n==1){
            ans=0;
        }
        else{
            ans=per(2,n-1)-2;
        }
        printf("%lld\n",ans);
    }

}
long long per(long long a,long long b)
{
    long long int c=1000000007;
    int ans=1;
        while(b!=0)
        {
            if(b%2==1)
            ans=(ans*a)%c;


            a=(a*a)%c;
            b/=2;
        }
    return ans;
}
