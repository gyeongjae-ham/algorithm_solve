#include<iostream>

using namespace std;

long long d[1000001];
const long long mod = 1000000009LL;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[n] = d[n-1] + d[n-2] + d[n-3]
    d[0] = 1;
    for(int i=1; i<=1000000; i++) {
        d[i] = 0;
        if(i-1 >= 0) {
            d[i] += d[i-1];
        }
        if(i-2 >= 0) {
            d[i] += d[i-2];
        }
        if(i-3 >= 0) {
            d[i] += d[i-3];
        }
        d[i] %= mod;
    }
    
    //1. 테스트 케이스 t를 입력받는다
    int t;
    cin>>t;
    //2. n을 입력받아서 d[n]을 출력한다
    while (t--) {
        int num;
        cin>>num;
        
        cout<<d[num]<<'\n';
    }

    return 0;
}