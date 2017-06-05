#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll coins[1007], use[] = {3, 2, 1};
ll way[21][100007];
ll solve(ll n, ll k)
{
    memset(way, 0, 100007);
    way[0][0] = 1;
    for(ll i = 0;i<n;i++)
    {
        for(ll j = coins[i];j<=k;j++)
        {
            for(ll c = 1;c<=use[i];c++)
            {

            }
            way[j] = (way[j] %100000007) + (way[j-coins[i]] % 100000007);
            cout<<j<<" "<<way[j]<<endl;
        }
    }
    return way[k];
}
int main()
{
     ll n, amount, t, kase = 0;
     cin>>t;
     while(t--)
     {

        cin>>n>>amount;

        for(ll i = 0;i<n;i++) cin>>coins[i];


        cout<<"Case "<<++kase<<": "<<solve(n, amount) % 100000007<<endl;
     }
     return 0;
}

