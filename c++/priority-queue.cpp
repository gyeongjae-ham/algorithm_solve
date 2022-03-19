//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>
using namespace std;
// 우선순위 큐, 내부구조는 heap으로 구현
// 주로 다익스트라, 그리디 등에 쓰인다
priority_queue<int, vector<int>, greater<int> > pq; // 오름차순
// priority_queue<int, vector<int>, less<int> > pq; // 내림차순
int main() {
    pq.push(5);
    pq.push(4);
    pq.push(3);
    pq.push(2);
    pq.push(1);
    cout << pq.top() << "\n";
    return 0;
}