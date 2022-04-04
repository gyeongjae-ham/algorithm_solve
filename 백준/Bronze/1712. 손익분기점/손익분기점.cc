#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a,b,c,x,res;

int main() {
    cin>>a>>b>>c;
    if(c<=b){
        cout<<-1;
    }
    else{
        cout<< (a / (c-b)) + 1;
    }
    return 0;
}