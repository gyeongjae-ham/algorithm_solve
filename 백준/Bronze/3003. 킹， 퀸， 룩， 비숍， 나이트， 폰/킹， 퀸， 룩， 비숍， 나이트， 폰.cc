#include <bits/stdc++.h>
using namespace std;

int b[8];

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a[] = {1,1,2,2,2,8};
    for(int i=0;i<6;i++){
        cin>>b[i];
    }
    
    for(int i=0;i<6;i++){
        cout<<a[i] - b[i]<<" ";
    }
    
    return 0;
}