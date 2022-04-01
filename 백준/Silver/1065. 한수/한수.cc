#include <bits/stdc++.h>
using namespace std;

int check(int N){
    int cnt=0, h, t, o;
    
    if(N<100){
        return N;
    }
    else {
        for(int i=100; i<=N; i++){
            h = i/100;
            t = (i%100)/10;
            o = (i%100)%10;
            
            if ((h-t)==(t-o)) {
                cnt++;
            }
        }
        return 99+cnt;
    }
}
int N;
int main(){
    cin>>N;
    cout<<check(N)<<"\n";
    return 0;
}