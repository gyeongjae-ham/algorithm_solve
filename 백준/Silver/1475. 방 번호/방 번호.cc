#include <bits/stdc++.h>

using namespace std;

int a[10];
string s;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>s;
    for(auto c:s){
        a[c-'0']++;
    }
    a[6]=a[9]=(a[6]+a[9]+1) / 2;
    
    int mn = *max_element(a, a+10);
    cout<<mn<<'\n';
    
    return 0;
}