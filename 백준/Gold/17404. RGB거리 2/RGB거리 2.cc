#include <iostream>
#include <algorithm>

using namespace std;

int d[1001][3];
int a[1001][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[i][j] = i번 집을 색 j로 칠했을 때, 1~i번 집을 칠하는 비용의 최소값
    //처음 집과 마지막 집이 이웃일 수 있으므로,
    //직선이 아닌, 원의 형태를 가진다
    //처음 집의 색상을 정해두고, 경우의 수를 구하면 된다
    //ex) 처음 집이 빨강 -> 초록, 파랑
    //d[n][1], d[n][2]
    
    //1. 집의 수 n
    int n;
    cin>>n;
    //2. 집을 색칠하는 비용
    for(int i=1;i<=n;i++) {
        for(int j=0;j<3;j++) {
            cin>>a[i][j];
        }
    }
    //3. 첫 번째 집의 색을 정한다
    //k = 첫 번째 집 색
    int ans = 1000*1000 + 1;
    for(int k=0;k<=2;k++) {
        for (int j=0;j<=2;j++) {
            if (j==k) {
                d[1][j] = a[1][j];
            } else {
                d[1][j] = 1000*1000 + 1;
            }
        }
        //첫 번째 집을 제외한 나머지 집들의 색칠하는 비용 구하기
        for (int i=2;i<=n;i++) {
            d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0];
            d[i][1] = min(d[i-1][0], d[i-1][2]) + a[i][1];
            d[i][2] = min(d[i-1][1], d[i-1][0]) + a[i][2];
        }
        
        //최소 비용으로 색칠한 경우 찾기
        for(int j=0; j<=2;j++) {
            if (j==k) continue; //첫 번째 집 색칠한 색이랑 같은 경우는 패스(이웃이라서 안됨)
            ans = min(ans, d[n][j]);
        }
    }
    cout<<ans<<'\n';
    
    return 0;
}