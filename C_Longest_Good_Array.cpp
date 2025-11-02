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
        int a,b;
        cin>>a>>b;
        int l = 1, r = 2e10;
        while(l<=r){
            int mid = (l+r)>>1;
            if(a+(mid*(mid-1)/2) <= b) l = mid + 1;
            else r = mid-1; 
        }

        cout<<l-1<<endl;
    }
    return 0;
}