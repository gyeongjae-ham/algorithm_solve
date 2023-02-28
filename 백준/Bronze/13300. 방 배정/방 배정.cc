#include <bits/stdc++.h>

using namespace std;

int N, k, s, y, cnt=0;
int ga[7], ba[7];

int main(void){
    cin>>N>>k;
    for(int i=0;i<N;i++){
        cin>>s>>y;
        if(s) ba[y]++;
        else ga[y]++;
    }
    for(auto j: ga){
        cnt += (j/k + j%k);
    }
    for(auto l: ba){
        cnt += (l/k + l%k);
    }
    cout<<cnt;
    
    return 0;
}