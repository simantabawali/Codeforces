#include <bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        long long l = 1, r = 2*k;
        while (l < r) {
            long long mid = (l + r) / 2;
            long long sq = (long long)sqrt(mid);
            if (mid - sq >= k)
                r = mid;
            else
                l = mid + 1;
        }
        cout << r << endl;
    }
}
