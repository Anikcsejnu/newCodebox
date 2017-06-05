#include<bits/stdc++.h>
#define mod 100000007
#define ll long long int
using namespace std;
ll use[55];
ll coin[55];
ll make, n;
ll dp[55][1007];
ll call(ll i,ll amount)
{
    if(i>=n) {
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount];
    ll ret=0;
    for(ll taken = 1;taken<=use[i];taken++)
    {
        if(amount-(coin[i]*taken)>=0)
            ret+=call(i+1,amount-(coin[i]*taken)) % mod;
        else
            break;
    }

    ret+=call(i+1,amount) % mod;
    return dp[i][amount]=ret % mod;

}
int main()
{

    ll t, kase = 0;
    cin>>t;

    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>n>>make;
        for(ll i = 0;i<n;i++) cin>>coin[i];
        for(ll i = 0;i<n;i++) cin>>use[i];
        cout<<"Case "<<++kase<<": "<<call(0, make)<<endl;
    }
    return 0;
}
