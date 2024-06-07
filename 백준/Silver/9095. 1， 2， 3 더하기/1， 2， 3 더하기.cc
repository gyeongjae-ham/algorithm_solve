#include <iostream>

using namespace std;

int d[12];
int go(int n) {
    //d[n] = n을 1,2,3의 합으로 나타내는 방법의 수
    //1,2,3의 끝나는 모든 방법의 수를 더하면 n을 만드는 방법의 수
    //d[n] = d[n-1] + d[n-2] + d[n-3]; 
    
    //가장 작은 계산(1,2,3까지이므로 d[3]까지는 작은 계산 예외 처리 해줘야 함)
    //공집합도 1개의 방법이 있는 것이므로 1(0일 경우 1,2,3을 쓰는 않는 방법)
    if (n <= 1) return 1;
    if (n == 2) return 2;
    d[n] = go(n-1) + go(n-2) + go(n-3);
    return d[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 테스트 케이스 t 입력받고
    int t;
    cin>>t;
    
    //2. while 돌면서 n에 대해서 방법수 출력하기
    while(t--) {
        int x;
        cin>>x;
        cout<<go(x)<<'\n';
    }
    
    return 0;
}