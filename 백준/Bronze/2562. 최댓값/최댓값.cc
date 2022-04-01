#include <bits/stdc++.h>
using namespace std;
int i,a,M,I;

int main(){
    M=-1;
    I=0;
    for(i=1; i<=9; i++){
        cin>>a;
        if(a>M){
            M=a;
            I=i;
        }
    }
    cout<<M<<"\n"<<I;
    return 0;
}