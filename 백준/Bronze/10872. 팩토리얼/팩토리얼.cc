#include <bits/stdc++.h>
using namespace std;
 
int n;

int fac(int n){
    if(n<=1){
        return 1;
    };
    return n*fac(n-1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    
    cout<<fac(n)<<"\n";
    return 0;
}