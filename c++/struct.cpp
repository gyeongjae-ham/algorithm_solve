//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>
using namespace std;
// c++에서 커스텀한 구조체를 형성하기 위해 class와 struct를 씁니다
// 하지만 struct만 알아도 충분하다

// 1) 커스텀한 정렬이 필요한 경우
// 커스텀한 무언가를 진행하고 싶다면 구조체를 통해서 해야 한다
// 예를 들어 2차원적인 자료구조는 pair를 가지고 한다
// x,y,z 등 여러가지 인자들이 나오고 커스텀한 정렬이 필요하다면 구조체를 사용하는 것이 좋다
// 정렬이 필요하지 않은 경우 2번처럼 단순하게 구조체를 설정하면 된다
// 커스텀 정렬이란 x를 1순위로 오름차순 y를 2순위로 내림차순 등 복잡한 정렬을 의미한다
struct Point{
    int y, x;
    Point(int y, int x) : y(y), x(x) {}
    Point(){y=-1; x=-1;}
    bool operator < (const Point & a) const { // 연산자 <를 오버로딩 한다
        if (x==a.x) return y <a.y; // x 값이 같을 경우에는 y를 기준으로 정렬하므로 x가 우선순위로 정렬함을 의미한다
        return x< a.x;
    }
};


// 2) 정렬이 필요하지 않을 경우
struct percent {
    int x, y;
    double w, d, l;
} a[6]; // 간단한 struct


struct Point2{
    int z,k;
    Point2(int z, int k) : z(z), k(k){}
    Point2(){z=-1; k=-1;}
    bool operator < (const Point2 & b) const{
        if(k==b.k) return z < b.z;
        return k < b.k;
    }
};
vector<Point2> v;
int main() {
    for (int i = 10; i >= 1; i--) {
        Point2 c = {i, i};
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    for(auto it : v) cout << it.z << " : " << it.k << "\n";
    return 0;
}