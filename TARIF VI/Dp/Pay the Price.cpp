#include<bits/stdc++.h>
#define ll long long int
#define SET(a) memset(a, -1, sizeof(a))
using namespace std;

ll coins[301], dp[1005][1005], make, n;
void ini()
{
    for(ll i = 0;i<301;i++)
    {
        coins[i] = i+1;
    }
}

ll recur(ll i, ll amount)
{
    if(i>=n)
    {
        if(amount == 0) return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    ll ret = 0;
    if(amount-coins[i]>=0)
        ret+=recur(i+1,amount-coins[i]);

    ret += recur(i+1, amount);
    return dp[i][amount] = ret;

}

int main()
{
    SET(dp);
    ini();
    cin>>n;
    make = n;
    cout<<recur(0, 6)<<endl;
}


