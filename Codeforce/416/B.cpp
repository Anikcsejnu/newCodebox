#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{
    vector<ll>a;
vector<ll>b;
    ll m, n, v, l, x, r;

    cin>>n>>m;

    for(ll i = 0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);
        //b.push_back(v);
    }

    for(ll i = 0;i<m;i++)
    {
        b = a;
        cin>>l>>r>>x;
        l--;
        sort(b.begin()+l, b.begin()+r);

        if(b[x-1]==a[x-1])
        {
            puts("Yes");
        }
        else
        {
            puts("No");
        }

    }
    a.clear();
    b.clear();

    return 0;
}
