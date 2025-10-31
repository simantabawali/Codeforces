#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'

int32_t main() {
    fast_io;
    int n,q,l;
    cin>>n>>q>>l;
    vector<int>a(l) , v(l);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<l;j++) a[j] = s[j] - '0';
        for(int i=0;i<l;i++) v[i] = max(v[i],a[i]);
    }

    int c = 0;
    for(auto it : v) if(it == 0) c++;

    while(q--){
        string k;
        cin>>k;
        vector<int>b(l);
        for(int j=0;j<l;j++) b[j] = k[j] - '0';
        for(int i=0;i<l;i++) b[i] = max(v[i],b[i]);
        int x = 0;
        for(auto it : b) if(it == 0) x++;

        if(x == 0) cout<<"dies"<<endl;
        else if(x == c) cout<<"survives"<<endl;
        else cout<<"uncertain"<<endl;
    }
        
    
    return 0;
}