#include <bits/stdc++.h>
using namespace std;
int N,row,i,j;

int main(){
    cin>>N;
    for (row=1; row<=N; row++){
        for(i=0; i<N-row; i++){
            cout<<" ";
        }
        
        for(j=0; j<row; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}