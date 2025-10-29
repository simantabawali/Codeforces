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
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        map<int,int>m,m1;
        for(int i=0;i<=n;i++) m[i] = 0;
        for(int i=0;i<n;i++) m[v[i]]++;
        int c=0;
        while (1){
            if(m[c] > 0){
                m[c]--;
                m1[c%x] += m[c];
                c++;
            }else if(m1[c%x] > 0){
                m1[c%x]--;
                c++;
            }else break;
        }cout<<c<<endl;
        
    }
    return 0;
}