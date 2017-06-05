#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll coins[] = {1, 5, 10, 25, 50};
ll way[10000];
void solve()
{
    way[0] = 1;
    for(ll i = 0;i<5;i++)
    {
        for(ll j = coins[i];j<=10000;j++)
        {
            way[j] += way[j-coins[i]];
        }
    }
}

int main()
{
    ll n;
    solve();
    while(cin>>n)
    {
        cout<<way[n]<<endl;
    }

    return 0;
}
