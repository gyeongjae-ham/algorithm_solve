#include <iostream>

using namespace std;

const int MAX = 1000000;
bool check[MAX + 1];

void era() {
    check[0] = check[1] = true;
    for (int i = 2; i <= MAX; i++) {
        if (check[i] == false) {
            for (int j = i + i; j <= MAX; j += i) {
                check[j] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 1. 에라토스테네스로 1,000,000까지 구해놓는다
    era();
    // 2. 숫자 t를 입력받는다 while t == 0까지 돌린다
    int t;
    while (cin >> t) {
        if (t == 0)
            break;
        // 3. 숫자 t-2부터 > 2까지 --하면서 check[t-i] = false 인지 확인한다
        int mn = -1;
        int a, b;
        for (int i = t - 2; i > 2; i--) {
            if (i % 2 == 0)
                continue;
            if (check[i] == false && check[t - i] == false) {
                if (i - (t - i) > mn) {
                    mn = i - (t - i);
                    a = t - i;
                    b = i;
                }
            }
        }
        // 5. 조합 표시를 위해서 int a, b에 t-i, i를 담는다
        cout << t << " = " << a << " + " << b << '\n';
    }

    return 0;
}