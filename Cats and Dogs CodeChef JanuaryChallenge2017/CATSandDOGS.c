#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int T,C,D,L,i;
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld %lld %lld",&C,&D,&L);
        if(C<=2*D)
        {
            if(L>=4*D && L<=4*(C+D) && L%4==0)
            printf("yes \n");
        else
            printf("no \n");
        }
        else
        {
            if(L>=4*(D+(C-2*D)) && L<=4*(C+D) && L%4==0)
            printf("yes \n");
        else
            printf("no \n");
        }
    }
}
