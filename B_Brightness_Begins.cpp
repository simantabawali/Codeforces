#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        long long k;
        cin >> k;
        long long l = 1, r = 2e18;
        while (r-l > 1) {
            long long mid = (l + r) >> 1;
            long long sq = int(sqrtl(mid));
            if (mid - sq >= k)
                r = mid;
            else
                l = mid;
        }
        cout << r << endl;
    }
}
