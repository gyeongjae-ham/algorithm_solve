#include <iostream>

using namespace std;

int d[10000001];

int go(int n) {
    //D[n] = min(D[n/3], D[n/2], D[n-1]) + 1;
    //1. 가장 작은 문제 예외 처리
    if (n==1) return 0;
    //2. 메모이제이션
    if (d[n] > 0) return d[n];
    //3. 최소값을 수월하게 구하기 위해서 n-1부터 구한 후
    d[n] = go(n-1) + 1;
    //4. n/2, n/3 최소값 비교
    if (n % 2 == 0) {
        int tmp = go(n/2) + 1;
        if (d[n] > tmp) d[n] = tmp;
    }
    if (n % 3 == 0) {
        int tmp = go(n/3) + 1;
        if (d[n] > tmp) d[n] = tmp;
    }
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