#include <bits/stdc++.h>
using namespace std;
int N,i,j;

int main(){
    cin>>N;
    for(i=0; i<N; i++){
        for(j=1; j<=i+1; j++){
            cout<<'*';
        }
        cout<<"\n";
    }
    return 0;
}