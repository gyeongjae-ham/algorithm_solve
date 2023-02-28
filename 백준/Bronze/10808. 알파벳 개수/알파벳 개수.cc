#include <bits/stdc++.h>

using namespace std;

int freq[26];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    
    for(auto c:s){
        freq[c-'a']++;
    }
    for(auto j:freq){
        cout<<j<<' ';
    }
    
    return 0;
}