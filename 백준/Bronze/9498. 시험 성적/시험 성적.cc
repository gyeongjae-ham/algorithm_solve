#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)

int main() {
    fi;
    int a;
    cin>>a;
    
    if (a > 89) cout << "A";
    else if (a > 79) cout << "B";
    else if (a > 69) cout << "C";
    else if (a > 59) cout << "D";
    else cout << "F";
  
    return 0;
}