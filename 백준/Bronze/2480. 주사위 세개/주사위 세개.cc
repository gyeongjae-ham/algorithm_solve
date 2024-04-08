#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)

int main() {
    fi;
    int a,b,c;
    cin>>a>>b>>c;
    
    if (a == b && a == c) cout << (a * 1000) + 10000;
    else if (a == b && a != c) cout << (a * 100) + 1000;
    else if (a == c && a != b) cout << (a * 100) + 1000;
    else if (b == c && b != a) cout << (b * 100) + 1000;
    else {
        if (a > b && a > c) cout << a * 100;
        else if (b > a && b > c) cout << b * 100;
        else cout << c * 100;
    }
  
    return 0;
}