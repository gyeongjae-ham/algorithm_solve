//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>
using namespace std;
// 주소 연산자 & : 변수 이름 앞에 사용하여 해당 변수의 주소값을 반환한다
// 참조 연산자 * : 포인터의 이름이나 주소 앞에 사용하여, 포인터의 저장된 주소에 저장되어 있는 값을 반환한다
int main() {
    string a = "abcda";
    string *b = &a;
    cout << b << "\n";
    cout << *b << "\n";
    return 0;
}