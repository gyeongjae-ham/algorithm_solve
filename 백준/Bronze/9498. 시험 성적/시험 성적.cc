#include <bits/stdc++.h>
using namespace std;

int sc;

int main(void) {
    ios::sync_with_stdio(0), cin.tie(0);
    
    cin>>sc;
    if(sc>89) cout<<'A';
    else if(sc>79) cout<<'B';
    else if(sc>69) cout<<'C';
    else if(sc>59) cout<<'D';
    else cout<<'F';
    
    return 0;
}