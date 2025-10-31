#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
int year(int n){
    int l=0,r=9999;
    while (l<=r){
        int mid = (l+r)>>1;
        if(mid*mid == n) return mid;
        if(mid*mid > n) r = mid-1; // ami jodi akhane mid dei mid-1 na diye tahole infity loof kno hocche 
        else if(mid*mid < n) l = mid+1;// ami jodi akhane mid dei mid+1 na diye tahole infity loof kno hocche
    }
    return -1;
    
}
int32_t main() {
    fast_io;
    int t;
    cin >> t;
    for(int i=1;i<=t;i++) {
        int n;
        cin>>n;
        int a = year(n);
        if(a == -1) cout<<a<<endl;
        else if(a == 0) cout<<a<<" "<<a<<endl;
        else cout<<a-1<<" "<<1<<endl;
        
    }
    return 0;
}