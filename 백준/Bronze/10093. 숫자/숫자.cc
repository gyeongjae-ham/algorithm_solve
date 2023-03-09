#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
#define ll long long

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll a,b;
    cin>>a>>b;
    
    if(a==b) cout<<0<<"\n";
    else if(a<b) {
        cout<<b-a-1<<"\n";
        for(ll i=a+1;i<b;i++){
            cout<<i<<" ";
        }
    }
    else if(a>b){
        cout<<a-b-1<<"\n";
        for(ll i=b+1; i<a;i++){
            cout<<i<<" ";
        }
    }
    
    return 0;
}