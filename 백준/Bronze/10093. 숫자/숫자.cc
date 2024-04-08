#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

int main() {
    fi;
    
    ll a, b;
    cin>>a>>b;
    
    if (b > a) {
        cout << b - a - 1 << "\n";
        for (ll i=a+1; i<b; i++) {
            cout << i << ' ';
        }
    }
    else if (a == b) cout << 0;
    else {
        cout << a - b - 1 << "\n";
        for (ll i=b+1; i<a; i++) {
            cout << i << ' ';
        }
    }
}