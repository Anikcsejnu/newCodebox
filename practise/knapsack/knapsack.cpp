//efficient knapsack

#include<bits/stdc++.h>
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
    cout<<recur(0,0)<<endl;
}
