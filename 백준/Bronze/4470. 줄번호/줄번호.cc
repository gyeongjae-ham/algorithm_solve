#include <bits/stdc++.h>

using namespace std;

int n;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n;
    
    for(int i=0;i<n+1;i++){
        string s;
        getline(cin,s);
        
        if (i==0) continue;
        cout<<i<<". "<<s<<"\n";
    }
    
    return 0;
}