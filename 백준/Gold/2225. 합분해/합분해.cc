#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const long long mod = 1000000000LL;
long long d[201][201];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //0부터 n까지의 정수 k개를 더해서 그 합이 n이 되는 경우의 수
    //d[k][n] = 시그마 d[k-1][n-l]
    //0<=l<=N
    
    //1. n,k를 입력받는다
    int n,k;
    cin>>n>>k;
    
    d[0][0] = 1LL;
    //k개 까지 구한다
    for(int i=1;i<=k;i++) {
        //n까지의 합
        for(int j=0;j<=n;j++) {
            //마지막 수가 l인 경우
            for(int l=0;l<=j;l++) {
                d[i][j] += d[i-1][j-l];
                d[i][j] %= mod;
            }
        }
    }
    
    cout<<d[k][n];
    
    return 0;
}