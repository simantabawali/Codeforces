#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int ans =0;
        if(a<c) ans = max(ans,c);
        else if(a>c) ans = max(ans,n-c);
        
        if(d>b) ans = max(ans,d);
        else if(b>d) ans = max(ans,n-d);

        cout<<ans<<endl;
    }
    return 0;
}