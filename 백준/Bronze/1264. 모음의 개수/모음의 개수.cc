#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string m = "aeiou";
    
    while (true) {
        int cnt=0;
        string s;
        getline(cin,s);
        
        if(s=="#") break;
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        for(int i=0;i<s.size();i++){
            for(int j=0;j<m.size();j++){
                if(m[j]==s[i]) cnt++;
            }
        }
        
        cout<<cnt<<"\n";
    }
    
    return 0;
}