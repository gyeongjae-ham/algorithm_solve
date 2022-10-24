#include <bits/stdc++.h>

using namespace std;

string s;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>s;
    
    for(int i=0;i<s.size();i++){
        cout<<s[i];
        if((i+1)%10==0) cout<<"\n";
    }
    cout<<"\n";
    
    return 0;
}