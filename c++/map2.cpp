//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, int> _map;
    _map["큰돌"]++;
    _map["큰돌"]++;
    for (auto c: _map) {
        cout << c.first << " : " << c.second << "\n";
    }
    return 0;


    // map과 unordered_map의 차이
    // map은 정렬이 됨/ 레드블랙트리기반/ 탐색, 삽입, 삭제에 O(logN) 걸림
    // unordered_map 정렬이 안됨/ 해시테이블 기반/ 탐색, 삽입, 삭제에 O(1) 최악의 경우 O(N) 걸림
    // 되도록 map을 쓰는 것을 권장함
}