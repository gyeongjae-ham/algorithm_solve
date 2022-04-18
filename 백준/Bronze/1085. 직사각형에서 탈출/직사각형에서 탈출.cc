#include <bits/stdc++.h>
using namespace std;
int x,y,w,h;

int main(){
    cin>>x>>y>>w>>h;
    
    int d1 = min(x,y);
    int d2 = min(w-x, h-y);
    
    int res = min(d1, d2);
    cout<<res;
    return 0;
}