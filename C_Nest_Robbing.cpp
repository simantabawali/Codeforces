#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
bool a(pair<int,int>a,pair<int,int>b){
    if(a.second != b.second){
        if(a.second > b.second) return true;
        return false;
    }else{
        if(a.first < b.first) return true;
        return false;
    }
}
int32_t main() {
    fast_io;
    int n,m,q,x;
    cin>>n>>m>>q>>x;
    vector<pair<int,int>>frec(n);
    vector<int>key(n),value(n);
    for(int i=0;i<n;i++) cin>>key[i];
    for(int i=0;i<n;i++) cin>>value[i];
    for(int i=0;i<n;i++) {
        frec[i].first = key[i];
        frec[i].second = value[i];
    }

    sort(frec.begin(),frec.end(),a);

    for(auto it : frec) cout<<it.first<<" "<<it.second<<endl;
 


    
    return 0;
}