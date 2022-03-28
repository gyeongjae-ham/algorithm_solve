//
// Created by 함경재 on 2022/03/28.
//

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    vector<int> a;
    for (int i = 1; i <= 3; i++)a.push_back(i);
    for (int i = 5; i <= 10; i++)a.push_back(i);
    cout << lower_bound(a.begin(), a.end(), 4) - a.begin() << "\n";
    return 0;
}
// 찾는 값의 이상인 지점을 반환한다
