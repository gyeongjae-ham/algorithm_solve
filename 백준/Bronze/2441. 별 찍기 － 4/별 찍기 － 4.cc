#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=0; j<i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<=n-i; k++){
            cout<<"*";
        }
        cout<<"\n";
    }
        
    return 0;
}