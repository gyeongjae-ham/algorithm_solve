#include <bits/stdc++.h>
using namespace std;
int a,i;
int cnt=0;
int re[42]={};
int main(){
    for(i=0; i<10; i++){
        cin>>a;
        re[a % 42]++;
    }
    for(int j : re){
        if(j > 0){
            cnt+=1;
        }
    }
    cout<<cnt;
    return 0;
}