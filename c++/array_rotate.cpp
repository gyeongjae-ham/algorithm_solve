//
// Created by 함경재 on 2022/03/28.
//

#include <bits/stdc++.h>
using namespace std;
vector<int> v;
// 인덱스 1번부터 4번가지의 배열만 앞으로 한칸씩 회전하는 로직
int main() {
    for (int i = 1; i <= 6; i++)v.push_back(i);
    int i = 1;
    int tmp = v[i];
    v[i] = v[i + 1];
    v[i + 1] = v[i + 2];
    v[i + 2] = v[i + 3];
    v[i + 3] = tmp;
    for(int i : v)cout << i << "\n";
}