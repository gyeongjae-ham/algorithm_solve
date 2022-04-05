#include <bits/stdc++.h>
using namespace std;
int res, n;

int Cnt(int n, int res) {
    if(n<=1) return res;
    n = n - (6*res);
    return Cnt(n, ++res);
}

int main() {
    cin>>n;
    cout<<Cnt(n, 1);
    return 0;
}