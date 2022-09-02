#include <bits/stdc++.h>
using namespace std;
string s;
vector<int> v(30);
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
    cin >> s;
    for (auto i : s) {
        v[i - 'a']++;
    }
    for (int i=0; i<26; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}