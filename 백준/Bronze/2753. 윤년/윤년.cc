#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)

int main() {
    fi;
    int n;
    cin>>n;
    
    if (n % 4 == 0 && n % 100 != 0) cout << 1;
    else if (n % 400 == 0) cout << 1;
    else cout << 0;
  
    return 0;
}