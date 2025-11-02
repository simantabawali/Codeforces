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
        string s;
        cin>>s;
        vector<int>a,b,c,d;
        int ch = 0;
        for(int i=0;i<n;i++) {
            if(s[i] == 'a') {
                ch++;
                a.push_back(0);
            }
            else a.push_back(ch);
        }
        ch = 0;
        for(int i=n-1;i>=0;i--) {
            if(s[i] == 'a') {
                ch++;
                b.push_back(0);
            }
            else b.push_back(ch);
        }
        reverse(b.begin(),b.end());
        ch = 0;
        for(int i=0;i<n;i++) {
            if(s[i] == 'b') {
                ch++;
                c.push_back(0);
            }
            else c.push_back(ch);
        }
        ch = 0;
        for(int i=n-1;i>=0;i--) {
            if(s[i] == 'b') {
                ch++;
                d.push_back(0);
            }
            else d.push_back(ch);
        }
        reverse(d.begin(),d.end());

        if(a.empty()) a.push_back(0);
        if(b.empty()) b.push_back(0);
        if(c.empty()) c.push_back(0);
        if(d.empty()) d.push_back(0);
        int sum_a = 0,sum_b = 0;
        for(int i=0;i<n;i++){
            sum_a += min(a[i],b[i]);
        }
        for(int i=0;i<n;i++){
            sum_b += min(c[i],d[i]);
        }

        cout<<min(sum_a,sum_b)<<endl;
    }
    return 0;
}