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
        vector<int>v(n),even,odd;
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        int x;
        for(x=2;x<= 1000;x++){
            int c = false;
            for(int i=0;i<n;i++){
                if(__gcd(x,v[i]) == 1){
                    c = true;
                    break;
                }
            }
            if(c) break;
        }
        cout<<x<<endl;
        
        

    }
    return 0;
}