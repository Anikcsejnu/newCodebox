#include<bits/stdc++.h>
#define ll long long int
#define SET(a) memset(a, -1, sizeof(a))
using namespace std;
ll dp[102][102*500], n;
ll cost[102], cap = 0;

ll recur(ll i, ll w)
{
    ll prof1, prof2 = 0;
    if(i==n) return 0;

    if(dp[i][w]!=-1) return dp[i][w];

    if(w+cost[i]<=cap)
    {
        prof1 = cost[i] + recur(i+1, w + cost[i]);
    }
    else
    {
        prof1 = 0;
    }

    prof2 = recur(i+1, w);

    dp[i][w] = max(prof1, prof2);

    return dp[i][w];

}

int main()
{
    //freopen("ini.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ll t, sum = 0;

    cin>>t;

    while(t--)
    {
        sum = 0;
        cin>>n;
        SET(dp);
        for(ll i = 0;i<n;i++)
        {
            cin>>cost[i];
            sum += cost[i];
        }
        cap = sum / 2;
        ll res = recur(0,0);

        cout<<sum - (res*2)<<endl;
    }

    return 0;
}
