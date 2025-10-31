#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
void __(vector<int>&v,int k){
    int n = v.size();
    sort(v.begin(),v.end());
    int sum = accumulate(v.begin(),v.end(),0);
    
    v[n-1]--;
    sort(v.begin(),v.end());
    
    if(v[n-1] - v[0] > k || sum % 2 == 0 ) {
        cout<<"Jerry"<<endl;
        return;
    }

    cout<<"Tom"<<endl;

}
int32_t main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        __(v,k);
        
    }
    return 0;
}