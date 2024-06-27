#include <iostream>
#include <algorithm>

using namespace std;

int d[1001][3];
int a[1001][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[i][j] = i번 집을 색 j로 칠했을 때, 1~i번 집을 칠하는 비용의 최솟값
    //j=0 -> 빨강, j=1 -> 초록, j=2 -> 파랑
    //a[i][j] = i번 집을 색 j로 칠하는 비용의 최소값
    
    //1. 집의 n을 입력받는다
    int n;
    cin>>n;
    
    //2. r,g,b 비용을 입력 받는다
    for(int i=1;i<=n;i++) {
        for(int j=0;j<3;j++) {
            cin>>a[i][j];    
        }
    }
    
    for(int i=1;i<=n;i++) {
        //마지막 색상이 빨강일 때는 앞선 색이 파랑, 초록 중 더 적은 비용으로 칠한 값 + 빨강 칠한값
        d[i][0] = min(d[i-1][1], d[i-1][2]) + a[i][0];
        //마지막 색상이 초록일 때는 앞선 색이 빨강, 파랑 중 더 적은 비용으로 칠한 값 + 초록 칠한값
        d[i][1] = min(d[i-1][0], d[i-1][2]) + a[i][1];
        //마지막 색상이 파랑일 때는 앞선 색이 빨강, 초록 중 더 적은 비용으로 칠한 값 + 파랑 칠한값
        d[i][2] = min(d[i-1][0], d[i-1][1]) + a[i][2];
    }
    
    //마지막 색상이 r,g,b 중에서 가장 적은 비용이 든 값 출력
    cout<<min({d[n][0], d[n][1], d[n][2]})<<'\n';
    
    return 0;
}