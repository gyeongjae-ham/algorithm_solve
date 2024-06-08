#include <iostream>
#include <algorithm>

using namespace std;

long long d[101][10];
const long long mod = 1000000000LL;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[n][l] = 길이가 n인 계단수. 마지막으로 사용된 수 l
    //n번째 l이 왔다면 n-1에는 l-1, l+1이 왔을 가능성이 있다
    //하지만 l이 0일 경우에는 l-1이 음수가 되어 버리고,
    //l이 9일 경우에는 l+1이 10이 되어 버리므로 예외 처리해야 한다
    
    int n;
    cin>>n;
    
    //1. 계단 길이가 1이면 1~9까지는 모두 해당 되므로 초기화 해준다
    for(int i=1;i<=9;i++) d[1][i] = 1;
    //2. 계단 길이(i)가 2부터 n까지 계산한다
    for(int i=2; i<=n; i++) {
        for(int j=0;j<=9;j++) {
            d[i][j] = 0;
            //3. 마지막 수 j-1이 0보다 크거나 같을 때 j-1 경우를 더해주고
            if (j-1 >= 0) d[i][j] += d[i-1][j-1];
            //4. 마지막 수 j+1이 9보다 작거나 같을 때 j+1 경우를 더해준다
            if (j+1 <= 9) d[i][j] += d[i-1][j+1];
            //5. mod로 나눠준다
            d[i][j] %= mod;
        }
    }
    //6. 길이가 n인 계단수를 모두 더하기 위해서 0~9까지를 더한 후 mod로 나눠서 출력한다
    long long ans = 0;
    for(int i=0;i<=9;i++) ans += d[n][i];
    cout<<ans % mod<<'\n';
    
    return 0;
}