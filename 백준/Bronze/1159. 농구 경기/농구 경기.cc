#include <bits/stdc++.h>

using namespace std;

int t;
string n, r = "";
int a[27];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> t;
    fill(a, a+27, 0);

    for(int i=0; i<t; i++) {
        cin >> n;
        a[n[0] - 'a']++;
    };

    for (int i=0; i<27; i++) {
        if (a[i] >= 5) r += (char)(i + 'a');
    };

    if (r != "") cout << r;
    else cout << "PREDAJA";

    return 0;
}
