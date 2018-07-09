#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t,N,i=1;
    float x;
    cin>>t;
    while(t--)
    {
        cin>>N;
        if(N==1)
        {
            cout<<1<<endl;
        }
        else
        {
            for(i=1;i<100000;i++)
            {
                x=pow(2,i);
                if(x>=N)
                    {
                        cout<<x<<endl;
                break;
                    }
            }
        }

    }
    return 0;
}
