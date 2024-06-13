#include <iostream>

using namespace std;

const long long mod = 10007;
int d[1001][10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //계단수와 비슷한 문제
    //d[n][l] = 길이가 n이고 마지막 숫자가 l인 오르막 수의 개수
    //d[1][l] = 1
    //d[n][l] = d[n-1][k] 0<=k<=l
    
    //1. 길이 n을 입력받는다
    int n;
    cin>>n;
    
    //2. 길이 n까지의 모든 경우 수를 계산한다
    for(int i=0;i<10;i++) d[1][i] = 1;
    
    for(int i=2;i<=n;i++) {
        for(int j=0;j<=9;j++) {
            for(int k=0;k<=j;k++) {
                d[i][j] += d[i-1][k];
                d[i][j] %= mod;     
            }
        }
    }
    
    long long ans = 0;
    for(int i=0;i<10;i++) {
        ans += d[n][i];
    }
    ans %= mod;
    cout<<ans<<'\n';
    
    return 0;
}