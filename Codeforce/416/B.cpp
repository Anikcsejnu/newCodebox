#include<bits/stdc++.h>
using namespace std;
int a[101010];
int main() {

    int n, m;
    cin >> n >> m;
    for(int i = 0;i<n;i++) {
        cin >> a[i];
    }
    for(int i = 0;i<m;i++) {
        int l, r, x;
        cin >> l >> r >> x;
        --l; --r; --x;
        int cnt = 0;
        for (int i = l; i <= r; ++i) {
            if(a[x]>a[i])
            {
                cnt++;
                //cout<<a[x] << " > "<<a[i]<<endl;
            }
           // cout<<cnt<<endl;
        }
        if(x==cnt+l)
        {
            puts("Yes");
        }
        else
        {
            puts("No");
        }
    }
    return 0;
}
