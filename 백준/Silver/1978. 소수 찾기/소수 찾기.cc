#include <bits/stdc++.h>
using namespace std;
int T, a;

bool check(int n) {
    if(n<2) {
        return false;
    }
    double sq = sqrt(n);
    for (int i=2; i<=sq; i++) {
        if(n%i==0) return false;
    }
    return true;
}

int main() {
    cin>>T;
    int cnt=0;
    for(int i=0; i<T; i++) {
        cin>>a;
        if(check(a)) cnt++;
    }
    cout<<cnt;
    return 0;
}