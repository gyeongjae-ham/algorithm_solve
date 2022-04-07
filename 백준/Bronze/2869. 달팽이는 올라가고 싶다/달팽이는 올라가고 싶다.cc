#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a,b,v;

int main() {
    cin>>a>>b>>v;
    int day = 1;
    day += (v-a) / (a-b);
    
    if((v-a)%(a-b)!=0) {
        day++;
    }
    if(a >= v) {
        cout<<1;
    }
    else {
        cout<<day;
    }
    return 0;
}