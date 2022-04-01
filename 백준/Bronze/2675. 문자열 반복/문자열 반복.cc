#include <bits/stdc++.h>
using namespace std;
int n,T;
string s;
int main() {
    cin>>T;
    for(int i=0; i<T; i++) {
        cin>>n;
        cin>>s;
        for(int j=0; j<s.length(); j++) {
            for(int k=0; k<n; k++) {
                cout<<s[j];
            }
        }
        cout<<"\n";
    }
    return 0;
}