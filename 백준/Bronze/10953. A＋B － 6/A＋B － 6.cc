#include <bits/stdc++.h>

using namespace std;

int n,a,b;
char c;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a>>c>>b;
        cout<<a+b<<"\n";
    }
    
    return 0;
}