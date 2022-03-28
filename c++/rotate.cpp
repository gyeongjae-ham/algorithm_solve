//
// Created by 함경재 on 2022/03/28.
//

#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    for (int i = 1; i < 10; ++i)v.push_back(i); // 1 2 3 4 5 6 7 8 9
//    rotate(v.begin(), v.begin() + 1, v.end());
//    2 3 4 5 6 7 8 9 1 앞으로 할 땐 이렇게
    rotate(v.begin(), v.begin() + v.size() - 1, v.end());
    // 9 1 2 3 4 5 6 7 8 뒤로 갈 땐 이렇게
    for (std::vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
        std::cout<<' '<<*it;
    std::cout << '\n';
    // rotate ㅎ마수에 들어가는 인자는 모두 이터레이터이며, first, middle, last라고 부른다 middle이 가리키는 요소가 first로 가며 회전하는 것을 의미한다
}