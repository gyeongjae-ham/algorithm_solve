#include <iostream>

using namespace std;

const int mod = 9901;
int d[100001][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //가로, 세로로 붙어 있지 않게 배치할 수 있는 방법의 수
    //d[n][0] = N번줄에 배치하지 않음
    //d[n][1] = N번줄에 왼쪽에만 배치
    //d[n][2] = N번줄에 오른쪽에만 배치
    //0번 위에는 0,1,2 가능
    //1번 위에는 0,2 가능
    //2번 위에는 0,1 가능
    int n;
    cin>>n;
    
    d[0][0] = 1;
    for(int i=1;i<=n;i++) {
        //n번째 줄이 0번일 경우
        d[i][0] = d[i-1][0] + d[i-1][1] + d[i-1][2];    
        //n번째 줄이 1번일 경우
        d[i][1] = d[i-1][0] + d[i-1][2];
        //n번째 줄이 2번일 경우
        d[i][2] = d[i-1][0] + d[i-1][1];
        
        for(int j=0;j<3;j++) {
            d[i][j] %= mod;
        }
    }
    
    cout<<(d[n][0] + d[n][1] + d[n][2]) % mod<<'\n';
    
    return 0;
}