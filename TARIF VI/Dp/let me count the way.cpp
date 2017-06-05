#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll coins[] = {1, 5, 10, 25, 50, 100};

ll way[30010];

void solve()
{
    way[0] = 1;

    for(ll i = 0;i<5;i++)
    {
        for(ll j =coins[i] ;j<=30010;j++)
        {
            way[j] += way[j-coins[i]];
        }
    }
}

int main()
{
    ll n;
    solve();
    //freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);
    while(cin>>n)
    {
        if(way[n]==1)
        {
            printf("There is only %lld way to produce %lld cents change.\n", way[n], n);
        }
        else
        {
            printf("There are %lld ways to produce %lld cents change.\n", way[n], n);
        }

    }

    return 0;


}
