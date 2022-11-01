#include <bits/stdc++.h>

using namespace std;

string s;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>s;
    
    string tmp = "";
    for(int i=0;i<3;i++){
        tmp += s[i];
    }
    
    if(tmp=="555") cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    
    return 0;
}