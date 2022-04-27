#include <bits/stdc++.h>
using namespace std;

int facto(int n){
    if(n > 2)
    n *= facto(n-1);
    return n;
}
int main(void){
    int n, res = 1;
    cin>>n;
    if(n!=0)
        res = facto(n);
    cout<<res;
}