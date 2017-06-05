// can i make n or not
#include<bits/stdc++.h>
using namespace std;
int coin[100];
int possible[1000007];
int main()
{
    int n, numberofcoin;
    cin>>numberofcoin>>n;
    for(int i = 1;i<=numberofcoin;i++) cin>>coin[i];
    possible[0] = 1;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=numberofcoin;j++)
        {
            if(i>=coin[j])
                possible[i] |= possible[i-coin[j]];
        }
    }

    if(possible[n])
        puts("yes");

    else
        puts("no");

    return 0;
}
