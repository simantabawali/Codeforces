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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a-b == 0 && b-c == 0 && c-d==0 && a-d == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}