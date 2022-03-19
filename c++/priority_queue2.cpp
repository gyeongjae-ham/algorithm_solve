//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>
using namespace std;
struct Point{
    int y, x;
    Point(int y, int x) : y(y), x(x){}
    Point(){y=-1; x=-1;}
    bool operator < (const Point & a) const{
        return x > a.x; // 정렬을 내림차순으로 했는데
    }
};

priority_queue<Point> pq;
int main() {
    pq.push({1, 1});
    pq.push({2, 2});
    pq.push({3, 3});
    pq.push({4, 4});
    pq.push({5, 5});
    pq.push({6, 6});

    cout << pq.top().x << "\n";
    return 0;
    // 결과를 보면 1이 나온다(6이 아니라)
    // 우선순위큐에 커스텀 정렬을 넣을 때 반대로 넣어야 하는 특징이 있기 때문이다
    // x < a.x 로 변경하면 6이 나오게 된다
}