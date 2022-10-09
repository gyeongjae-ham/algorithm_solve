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
        
        if(s.size()==1) cout<<s<<s<<"\n";
        else {
            cout<<*s.begin()<<*(s.end()-1)<<"\n";
        }
    }
    
    return 0;
}