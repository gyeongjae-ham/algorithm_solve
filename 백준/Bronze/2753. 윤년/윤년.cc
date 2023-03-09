#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    cin>>a;
    
    if (a%4==0 && a%100 != 0 || a%400==0) cout<<1<<"\n";
    else cout<<0<<"\n";
    
    return 0;
}