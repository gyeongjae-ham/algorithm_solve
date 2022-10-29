#include <bits/stdc++.h>

using namespace std;

string s;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    while (true) {
        getline(cin, s);
        if(s=="***") break;
        reverse(s.begin(), s.end());
        cout<<s<<"\n";
    }
    
    return 0;
}