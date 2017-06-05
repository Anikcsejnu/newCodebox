#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, b, n, x, ans = 0;
    bool f = true;
    cin>>a>>b>>n;

    for(int i = -1000;i<=1000;i++)
    {
        ans = a*(pow(i,n));
//cout<<ans<<endl;
//        if(ans > 1000)
//        {
//            f  = true;
//            break;
//        }
        if(ans==b)
        {
            x = i;
            f = false;
            break;
        }
    }
    if(f) puts("No solution");
    else cout<<x<<endl;


    return 0;
}
