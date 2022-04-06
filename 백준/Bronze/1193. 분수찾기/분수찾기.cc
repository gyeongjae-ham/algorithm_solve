#include <bits/stdc++.h>
using namespace std;
int N, i;

int main() {
    cin>>N;
    while(N>i) {
       N-=i;
       i++;
    }
    
    if (i%2==1) {
        cout<<i+1-N<<'/'<<N<<"\n";
    } 
    else {
        cout<<N<<'/'<<i+1-N<<"\n";
    }
    return 0;
}