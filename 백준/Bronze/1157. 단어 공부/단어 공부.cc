#include <bits/stdc++.h>
using namespace std;
int ap[26], cnt=0;
string s;

int main() {
    cin>>s;
    for(int i=0; i<(int)(s.length()); i++) {
        if(s[i]<97){ap[s[i] - 65]++;} // 대문자 넣기
        else {ap[s[i] - 97]++;} // 소문자 넣기
    }
    
    int max=0; 
    int max_idx=0;
    
    for(int i=0; i<26; i++) {
        if(max<ap[i]) {
            max=ap[i];
            max_idx=i;
        }
    }
    
    for(int i=0; i<26; i++) {
        if(max==ap[i]) cnt++;
    }
    
    if(cnt>1) cout<<'?';
    else cout<<(char)(max_idx+65);
}