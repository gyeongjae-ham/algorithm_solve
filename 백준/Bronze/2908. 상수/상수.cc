#include <bits/stdc++.h>
using namespace std;
int a,b;
int main() {
    string f,s;
    cin>>f>>s;
    
    reverse(f.begin(), f.end());
    reverse(s.begin(), s.end());
    
    int a = stoi(f);
    int b = stoi(s);
    
    if(a>b) cout<<a;
    else cout<<b;
    return 0;
}