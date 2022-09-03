#include <bits/stdc++.h>

using namespace std;
string n;
int a[11];

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
    cin>>n;
    for (auto i : n) {
        a[i-'0']++;
    }
    
    int sixnine = (a[6]+a[9]+1)/2;
    a[6]=a[9]=sixnine;
    
    int max = *max_element(a, a+11);
    
    cout<<max<<"\n";
    
    return 0;
}