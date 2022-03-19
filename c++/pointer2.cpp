//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>
using namespace std;
int b;
vector<int> v;
int main() {
    int * a = &b;
    cout << a << "\n";
    v.push_back(1);
    auto c = find(v.begin(), v.end(), 1); // 이터레이터 값을 반환한다
    cout << *c << "\n";
    return 0;
}

// 이터레이터는 포인터의 일종이지만 스마트포인터이며 주소값을 반환하지는 않는다.