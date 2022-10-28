#include <bits/stdc++.h>

using namespace std;

string s;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>s;
    string ans = "";
    
    for(int i=0;i<s.size();i++){
        if(s[i] == 'E') ans += 'I';
        else if(s[i] == 'I') ans += 'E';
        else if(s[i] == 'S') ans += 'N';
        else if(s[i] == 'N') ans += 'S';
        else if(s[i] == 'T') ans += 'F';
        else if(s[i] == 'F') ans += 'T';
        else if(s[i] == 'P') ans += 'J';
        else ans += 'P';
    }
    cout<<ans<<"\n";
    
    return 0;
}