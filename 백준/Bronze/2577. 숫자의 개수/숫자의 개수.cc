#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int res[11];
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> a >> b>> c;
    
    int mt = a*b*c;
    string s = to_string(mt);
    for (auto i : s) {
        res[i-'0']++;
    }
    for (int i=0; i<10; i++) {
        cout << res[i] << "\n";
    }
    return 0;
}