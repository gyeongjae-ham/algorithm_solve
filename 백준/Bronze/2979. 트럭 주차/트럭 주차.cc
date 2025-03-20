#include <bits/stdc++.h>

using namespace std;

int a,b,c,f,l;
int t[102];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    fill(t, t+100, 0);
    cin >> a >> b >> c;
    
    for (int i=0; i<3; i++) {
        cin >> f >> l;
        for (int j=f; j<l; j++) {
            t[j]++;
        }
    }

    int total = 0;
    for (auto x: t) {
        if (x) {
            if (x == 1) total += a;
            if (x == 2) total += b * 2;
            if (x == 3) total += c * 3;
        }
    }

    cout << total;

    return 0;
}
