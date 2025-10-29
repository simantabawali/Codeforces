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
        int k;
        cin>>k;
        int s=2,x = 2,n = 0;
        while (true){
            if(n + (s*s-x) >= k) break;
            n += s*s - x;
            if(s*s - x < k){
                x = s*s +1;
                s++;
            }
        }
        n += s + (k-n) - 1;

        cout<<n<<endl;
        
    }
    return 0;
}