#include <bits/stdc++.h>
using namespace std;
string s;
int main() {
    cin>>s;
    string alp = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < alp.length(); i++) {
        cout << (int)s.find(alp[i]) << " ";
    }
    return 0;
}