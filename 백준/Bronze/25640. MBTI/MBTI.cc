#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    
    int t, cnt=0;
    cin>>t;
    
    for(int i=0;i<t;i++){
        string s2;
        cin>>s2;
        if(s==s2) cnt++;
    }
    cout<<cnt<<"\n";
    
    return 0;
}