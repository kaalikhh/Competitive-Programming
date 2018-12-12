#include <iostream>

using namespace std;

int main()
{
    int N,r,R;
    cin>>N>>r;
    while(N--)
    {
        cin>>R;
        if (R>=r)
            cout<<"Good boi"<<'\n';
        else cout<<"Bad boi"<<'\n';
    }
    return 0;
}
