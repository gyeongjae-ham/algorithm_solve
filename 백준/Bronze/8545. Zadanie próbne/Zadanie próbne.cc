#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i]<<"";
    }
    cout<<"\n";
    return 0;
}