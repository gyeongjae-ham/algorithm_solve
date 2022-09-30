#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b[3];
    
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    sort(b, b+3);
    cout<<b[1]<<"\n";
    
    return 0;
}