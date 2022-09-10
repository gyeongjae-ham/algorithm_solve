#include <bits/stdc++.h>
using namespace std;
 
int a,b,v;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin>>a>>b>>v;
    
    cout<<(v-b-1)/(a-b)+1;
    
    return 0;
}