#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    int odd_count = 0;
    int even_count = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    if (odd_count > 0 && even_count > 0) sort(a.begin(), a.end());
    
   
    for (int i = 0; i < n; i++) cout << a[i] <<" "; 
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}