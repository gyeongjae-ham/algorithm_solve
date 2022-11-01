#include <bits/stdc++.h>

using namespace std;
int a,b,num;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
    cin>>a>>b;
    for (int i=0; i<a; i++){
        cin>>num;
        if (num < b) cout<<num<<" ";
    }
    cout<<"\n";
    return 0;
}