#include <bits/stdc++.h>

using namespace std;

string s;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    cin>>s;
    
    for(int i=0;i<alphabet.length();i++){
        cout<<(int)s.find(alphabet[i])<<" ";
    }
    cout<<"\n";
    
    return 0;
}