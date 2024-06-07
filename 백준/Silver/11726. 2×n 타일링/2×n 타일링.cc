#include <iostream>

using namespace std;

int d[10001];

int go(int num) {
    //2. 직사각형의 마지막 부분을 채우는 방법은 세로 1개 or 가로 2개 뿐이다
    //d[n] = 2*n의 직사각형을 채우는 방법의 수
    //d[n] = d[n-1] + d[n-2];
    
    //가장 작은 계산
    if (num <= 1) return 1;
    //메모이제이션
    if (d[num] > 0) return d[num];
    
    d[num] = go(num-1) + go(num-2);
    //3. 10007로 나머지 값만 계산한다
    d[num] %= 10007;
    
    return d[num];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 크기 n을 입력받는다
    int n;
    cin>>n;
    
    cout<<go(n)<<'\n';
    
    return 0;
}