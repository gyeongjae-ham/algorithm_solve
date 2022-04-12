#include <bits/stdc++.h>
using namespace std;
int N;

int main() {
    cin>>N;
    int H, W, P;
    for (int i=0; i<N; i++) {
        cin>>H>>W>>P;
        int f = P%H;
        int b = P/H;
        int res;
        if(f==0) {
            res = H*100 + b;
        }
        else {
            res = f*100 + (b+1);
        }
        cout<<res<<"\n";
    }
    return 0;
}