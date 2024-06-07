#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1. 테스트 케이스 t 입력받고
    int t;
    cin >> t;

    // 2. while 돌면서 n에 대해서 방법수 출력하기
    while (t--) {
        int x;
        cin >> x;

        int d[11];
        d[0] = 1;
        d[1] = 1;
        d[2] = 2;
        for (int i = 3; i <= x; i++) {
            d[i] = d[i - 1] + d[i - 2] + d[i - 3];
        }

        cout << d[x] << '\n';
    }

    return 0;
}