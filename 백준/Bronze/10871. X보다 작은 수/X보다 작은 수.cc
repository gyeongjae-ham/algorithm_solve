#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)

int main() {
    fi;
    int a, b;
    cin>>a>>b;
    
    int num;
    for (int i = 0; i<a; i++) {
        cin>>num;
        if (num < b) {
            cout<<num<<' ';
        }
    }
  
    return 0;
}