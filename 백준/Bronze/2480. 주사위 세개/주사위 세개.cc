#include <bits/stdc++.h>
using namespace std;
 
int a,b,c,res;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> a >> b >> c;
    
    if (a==b && b==c){
        res = 10000 + a*1000;
    }
    else if (a==b || a==c){
        res = 1000 + a*100;
    }
    else if (b==c){
        res = 1000 + b*100;
    }
    else {
        res = max(max(a,b),c) * 100;
    }
    
    cout << res;
    return 0;
}

