#include<bits/stdc++.h>
#define ll long long int
#define SET(a) memset(a, -1, sizeof(a))
using namespace std;
ll ar[1005];
int main()
{
    ll test, n, sum, maxi, cnt;

    cin>>test;

    while(test--)
    {
        cnt = sum = maxi = 0;
        cin>>n;
        for(ll i = 0;i<n;i++)
        {
            cin>>ar[i];
        }
        sum = ar[0];
        for(ll i = 1;i<n-1;i++)
        {
            if(sum+ar[i]<ar[i+1])
            {
                sum += ar[i];
                cnt++;
            }
        }

        cout<<cnt+2<<endl;
    }

    return 0;
}
