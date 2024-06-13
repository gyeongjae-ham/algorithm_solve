#include <iostream>

using namespace std;

int d[501][501];
int a[501][501];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //정수 삼각형을 이루는 node들을 행, 열로 표현해서 i,j로 표현할 때
    //d[i][j] = i행 j열이 선택되었을 때, 최대의 합
    //i,j가 선택되기 전에 선택된 수는 (i-1, j-1), (i-1, j)
    //d[i][j] = max(d[i-1][j], d[i-1][j-1]) + a[i][j]
    
    //1. 삼각형의 크기 n을 입력받는다
    int n;
    cin>>n;
    //2. 삼각형을 이루는 정수 입력
    for(int i=1;i<=n;i++) {
        for(int j=0;j<i;j++) {
            cin >> a[i][j];
        }
    }
    
    //제일 위의 노드는 제일 첫 정수
    d[1][0] = a[1][0];
    for(int i=2;i<=n;i++) {
        for(int j=0;j<=i;j++) {
            d[i][j] = d[i-1][j] + a[i][j];
            if(j-1 >= 0 && d[i][j] < d[i-1][j-1] + a[i][j]) {
                d[i][j] = d[i-1][j-1] + a[i][j];
            }
        }
    }
    
    int ans = d[n][0];
    for(int i=1;i<=n;i++) {
        if(ans < d[n][i]) {
            ans = d[n][i];
        }
    }
    
    cout<<ans<<'\n';
    
    return 0;
}