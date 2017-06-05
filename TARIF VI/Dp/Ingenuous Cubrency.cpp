#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll coins[22], ways[10010];
void gen()
{
    for(int i = 1;i<22;i++)
    {
        coins[i] = pow(i,3);
    }
}
void solve()
{
    memset(ways, 0, 10010);
    ways[0] = 1;

    for(ll i = 1;i<22;i++)
    {
        for(ll j = coins[i];j<=10010;j++)
        {
            ways[j] += ways[j - coins[i]];
        }
    }
}
int main()
{
    gen();
    solve();
    freopen("ini.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    ll n;

    while(cin>>n)
    {
        cout<<ways[n]<<endl;
    }

    return 0;

}
