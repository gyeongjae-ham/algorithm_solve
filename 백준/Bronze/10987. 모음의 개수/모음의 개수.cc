#include <bits/stdc++.h>

using namespace std;

int cnt=0;
string s;
string a = "aeiou";

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    
    for(int i=0;i<s.size();i++){
        for(int j=0;j<a.size();j++){
            if(s[i]==a[j]) cnt++;
        }
    }
    cout<<cnt<<"\n";
    
    return 0;
}