#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll ar[40] =  	{9, 45, 55, 99, 297, 703, 999, 2223, 2728,
4879, 4950, 5050, 5292, 7272, 7777, 9999, 17344, 22222,
38962, 77778, 82656, 95121, 99999, 142857, 148149,
181819, 187110, 208495, 318682, 329967, 351352,
 356643, 390313, 461539, 466830, 499500, 500500, 533170};


 int main()
 {
     ll n, a, b;
    // freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     cin>>n;

     for(ll j = 1;j<=n;j++)
     {
         cin>>a>>b;
         bool f = false;
         printf("case #%lld\n", j);
         for(int i = 0;i<40;i++)
         {
             if(ar[i]<a) continue;
             else if(ar[i]>=a && ar[i]<=b)
             {
                 f = true;
                 printf("%lld\n", ar[i]);
             }
             else break;
         }
         if(!f)
         {
             printf("no kaprekar numbers\n");
         }
         if(j!=n) puts("");

     }

     return 0;
 }
