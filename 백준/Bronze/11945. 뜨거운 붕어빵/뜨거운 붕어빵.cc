#include <bits/stdc++.h>

using namespace std;

int n,m;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        
        reverse(s.begin(), s.end());
        cout<<s<<"\n";
    }
    
    return 0;
}