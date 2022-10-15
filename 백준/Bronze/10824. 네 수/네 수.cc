#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a,b,c,d;
    cin>>a>>b>>c>>d;
    
    long long fn = stol(a+b);
    long long bn = stol(c+d);
    
    cout<<fn+bn<<"\n";
    
    return 0;
}