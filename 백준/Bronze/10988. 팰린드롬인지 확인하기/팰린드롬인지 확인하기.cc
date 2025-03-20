#include <bits/stdc++.h>

using namespace std;

string w, d;
char a[101];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> w;

    d = w;
    reverse(d.begin(), d.end());

    if (w == d) cout << 1;
    else cout << 0;

    return 0;
}
