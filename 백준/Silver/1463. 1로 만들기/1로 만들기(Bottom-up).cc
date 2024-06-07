#include <iostream>

using namespace std;

int d[10000001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // 가장 작은 계산
    d[1] = 0;
    for (int i = 2; i <= n; i++) {
        // 최솟값을 편하게 구하기 위해서 n-1부터 계산
        d[i] = d[i - 1] + 1;
        // i/2, i/3 최솟값 비교
        if (i % 2 == 0 && d[i] > d[i / 2] + 1) {
            d[i] = d[i / 2] + 1;
        }
        if (i % 3 == 0 && d[i] > d[i / 3] + 1) {
            d[i] = d[i / 3] + 1;
        }
    }

    cout << d[n] << '\n';

    return 0;
}