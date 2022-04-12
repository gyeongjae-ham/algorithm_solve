#include <bits/stdc++.h>
using namespace std;

int Count(int k, int n) {
    if (n==1) {
        return 1;
    }
    if (k==0) {
        return n;
    }
    
    return (Count(k-1, n) + Count(k, n-1));
}

int main() {
    int T;
    cin>>T;
    for (int i=0; i<T; i++) {
        int k,n;
        cin>>k>>n;
        cout<<Count(k,n)<<"\n";
    }
    return 0;
}