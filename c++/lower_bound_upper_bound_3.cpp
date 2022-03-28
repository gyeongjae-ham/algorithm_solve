//
// Created by 함경재 on 2022/03/28.
//

#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    for (int i = 2; i <= 5; i++)v.push_back(i);
    v.push_back(7);
    // 2,3,4,5,7
    cout << upper_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
    cout << lower_bound(v.begin(), v.end(), 6) - v.begin() << "\n";
    cout << upper_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
    cout << lower_bound(v.begin(), v.end(), 9) - v.begin() << "\n";
    cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
    cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << "\n";
}

// 만약 찾는 값을 찾지 못했을 경우 그 근방지점을 반환하는 결과를 볼 수 있다
// 추후 이분탐색의 결과도 이와 비슷하게 출력된다