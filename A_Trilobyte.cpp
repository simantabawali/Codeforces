#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
int digit(int x){
    int digits = 0;
    if(x == 0) return 1;
    else {
        while (x > 0) {
            digits++;
            x /= 10;
        }return digits;
    }
    
}
int32_t main() {
    fast_io;
    int n;
    cin>>n;
    int x = 0;
    while(true){
        int a = n;
        int k = 10*digit(x);
        a *= k;
        a += x;
        if(a%8 == 0) break;
        x++;
    }

    cout<<x<<endl;
    return 0;
}