#include<bits/stdc++.h>
#define SET(a) memset(a, -1, sizeof(a))
#define ll long long int
using namespace std;
ll cost[1010], weight[1010], cap, n;
ll dp[1010][35];

ll recur(ll i, ll w)
{
    ll profit1 , profit2 = 0;
    if(i==n)
        return 0;

    if(dp[i][w]!=-1) return dp[i][w];
    if(w+weight[i]<=cap)
    {
        profit1 = cost[i] + recur(i+1, w+weight[i]);
    }
    else
    {
        profit1 = 0;
    }
    profit2 = recur(i+1, w);
    dp[i][w] = max(profit1, profit2);
    return dp[i][w];
}

int main()
{
    ll t, g, sum;
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin>>t;

    while(t--)
    {
        SET(dp);

        sum = 0;
        cin>>n;
        for(ll i = 0;i<n;i++)
        {
            cin>>cost[i]>>weight[i];
        }
        cin>>g;
        for(ll i = 0;i<g;i++)
        {
            SET(dp);
            cin>>cap;

            sum+=recur(0,0);
        }

        cout<<sum<<endl;
    }

    return 0;
}
