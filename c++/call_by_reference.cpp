//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>
using namespace std;
int idx = 2;
// 어떤 값을 함수로 넘겨서 변하게 만들고 싶을 경우에는 주소값을 넘겨야 한다 값을 넘기면 바뀌지 않는다
// call by reference
void go(int &idx){
    idx = 1;
}

// call by value
void go2(int idx){
    idx = 100;
}
int main() {
    go(idx);
    cout << idx << "\n"; // 1 : 바뀌었다. 2 -> 1
    go2(idx);
    cout << idx << "\n"; // 1 : 바뀌지 않았다.(100으로 바뀌지 않았다)
}