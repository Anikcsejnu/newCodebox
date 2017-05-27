#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(0);

    ll a,b, fa = 0, fb = 0;

    cin>>a>>b;
    ll i = 0;
    ll give = 1;
    while(a>=0 || b>=0)
    {
        if(i%2==0)
        {
            a -= give;
            if(a<0)
            {
                fa = 1;
                break;
            }
        }
        else
        {
            b -= give;
            if(b<0)
            {
                fb = 1;
                break;
            }
        }
        i++;
        give++;
    }

    if(fa==1)
    {
        puts("Vladik");
    }
    else
    {
        puts("Valera");
    }

    return 0;
}
