#include <bits/stdc++.h>
using namespace std;
string a, temp;
int main(){
    cin>>a;
    temp=a;
    reverse(temp.begin(), temp.end());
    if(temp==a) cout<<1<<"\n";
    else cout<<0<<"\n";
    return 0;
}