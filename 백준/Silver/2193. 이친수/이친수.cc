#include <iostream>

using namespace std;

long long d[91][2];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[n][l] = n자리 이친수, 마지막 수 l
    //d[n][0] = d[n-1][0] + d[n-1][1]
    //d[n][1] = d[n-1][0] (1 연속 두 번 안됨)
    //초기화(길이가 가장 짧은 1인 경우)
    //d[1][0] = 0 (이친수는 0으로 시작하지 않으므로)
    //d[1][1] = 1
    
    int n;
    cin>>n;
    
    d[1][0] = 0;
    d[1][1] = 1;
    for(int i=2;i<=n;i++) {
        for(int j=0;j<2;j++) {
            d[i][j] = 0;
            if (j == 0) d[i][0] += d[i-1][0] + d[i-1][1];
            if (j == 1) d[i][1] += d[i-1][0];
        }
    }
    
    long long ans = 0;
    cout<<d[n][0] + d[n][1]<<'\n';
    
    return 0;
}