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
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        // cout<<s<<" "<<t<<endl;
        if(s==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}