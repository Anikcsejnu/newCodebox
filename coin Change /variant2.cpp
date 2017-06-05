// how many way can i build n 2+1 and 1+2 is same

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll coins [] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
ll way[30020];

void solve()
{
    way[0] = 1;
    for(ll i = 0;i<11;i++)
    {
        for(ll j = coins[i];j<=30020;j++)
        {
                way[j] += way[j-coins[i]];
        }
    }
}
int main()
{
    solve();
    ll n, a, b;
    while(scanf("%lld.%lld", &a, &b)){
        n = (a*100) + b;
        if(n==0) break;

        printf("%3lld.%.2lld%17lld\n",a,b,way[n]);
    }

    return 0;
}


