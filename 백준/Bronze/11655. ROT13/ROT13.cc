#include <bits/stdc++.h>
using namespace std;

string s, r;
char tmp;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    
    getline(cin, s);
    
    for (char c : s) {
        if (c >= 'A' && c <= 'Z') {
            tmp = ((c - 'A' + 13) % 26) + 'A';
            r += tmp;
        }
        else if (c >= 'a' && c <= 'z') {
            tmp = ((c - 'a' + 13) % 26) + 'a';
            r += tmp;
        }
        else r += c;
    }
    
    cout << r;
    
    return 0;
}