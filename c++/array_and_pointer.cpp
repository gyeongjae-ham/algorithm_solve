//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>
using namespace std;
// 배열의 이름은 배열의 주소값의 첫번째 시작 주소를 가리킨다
void go(int a[]){
    a[2] = 100;
}
int a[3] = {1, 2, 3};

int main() {
    go(a);
    for(int i:a) cout << i << "\n";
}