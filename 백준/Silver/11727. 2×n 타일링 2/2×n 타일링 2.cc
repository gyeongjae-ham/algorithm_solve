#include <iostream>

using namespace std;

int d[1001];

int go(int n) {
    //d[n] = 2*n 크기의 직사각형을 채우는 방법의 수
    //d[n] = d[n-1](세로막대) + d[n-2](가로막대2개) + d[n-2](정사각형);
    
    //가장 작은 계산
    if (n <= 1) return 1;
    //메모이제이션
    if (d[n] > 0) return d[n];
    d[n] = go(n-1) + 2*(go(n-2));
    d[n] %= 10007;
    
    return d[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    
    cout<<go(n)<<'\n';
    
    return 0;
}