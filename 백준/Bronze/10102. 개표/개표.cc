#include <bits/stdc++.h>

using namespace std;

int n, cna=0, cnb=0;
string s;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>s;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='A') cna++;
        else if(s[i]=='B') cnb++;
    }
    
    if(cna>cnb) cout<<'A'<<"\n";
    else if(cnb>cna) cout<<'B'<<"\n";
    else cout<<"Tie"<<"\n";
    
    return 0;
}