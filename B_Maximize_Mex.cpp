#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
void __(vector<int>&v,int n,int r){
    vector<int>a,b;
    map<int,int>m;
    for(int i=0;i<=n;i++) m[i] = 0;
    for(int i=0;i<n;i++) m[v[i]]++;
    // for(auto it : m) cout<<it.first<<" "<<it.second<<endl;
    // cout<<endl;
    for(auto it : m){
        if(it.second == 0) b.push_back(it.first);
        if(it.second > 1) a.push_back(it.first);
    }

    // for(auto it : a) cout<<it<<" " <<endl;
    // cout<<endl;
    // for(auto it : b) cout<<it<<" " <<endl;
    // cout<<endl;

    for(int i =0;i<b.size();i++){
        int c = 1;
        for(int j=0;j<a.size();j++){
            if((b[i] - a[j] > 0) && ((b[i] - a[j]) % r == 0) && m[a[j]] > 1){
                c = 0;
                m[a[j]]-- ;
                break;
            }
        }

        if(c) {
            cout<<b[i]<<endl;
            return;
        }
    }
}
int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n,r;
        cin>>n>>r;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        __(v,n,r);
        
    }
    return 0;
}