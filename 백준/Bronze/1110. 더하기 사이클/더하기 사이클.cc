#include <bits/stdc++.h>
using namespace std;
int N, init, cnt;

int main(){
    cin>>init;
    N=init;
    while(true){
        N = ((N%10)*10) + (((N/10)+(N%10))%10);
        cnt += 1;
        
        if(N==init){
            break;
        }
    }
    cout<<cnt;
    return 0;
}