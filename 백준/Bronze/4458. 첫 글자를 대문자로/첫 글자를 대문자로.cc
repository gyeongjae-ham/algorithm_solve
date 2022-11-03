#include <bits/stdc++.h>

using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    cin>>n;
    cin.ignore();
    
    for(int i=0; i<n; i++){
        string s;
        getline(cin, s);
 
        for(int i=0; i<s.length(); i++){
            s[0]=toupper(s[0]);
            cout<<s[i];
        }
        cout<<"\n";
    }
    
    return 0;
}