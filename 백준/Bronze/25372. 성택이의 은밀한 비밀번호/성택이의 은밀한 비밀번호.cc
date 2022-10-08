#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    
    for (int i=0;i<t;i++){
        string s;
        cin>>s;
        
        if(s.size() > 9 || s.size() < 6) cout<<"no"<<"\n";
        else cout<<"yes"<<"\n";    
    }
    
    return 0;
}