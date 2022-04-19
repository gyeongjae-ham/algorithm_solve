#include <bits/stdc++.h>
using namespace std;
#define PI 3.1415926535897932

// 유클리드의 기하학에서 원의 넓이는 2πr²이지만
// 택시 기하학에서의 원은 마름모 모양이 나오므로 원의 넓이는 2r²이 됩니다.
// ......음..... 그렇구나......그래...; 이건 못 풀겠다 우선 풀이를 봤는데
// 음.......모르는 구나 나 기하학 아하 그렇네 나 모르네

int main() {
    long double R;
    cin>>R;
    cout<<fixed;
    cout.precision(6);
    cout<<powl(R, 2) * PI<<'\n';
    cout<<powl(R, 2) * 2<<'\n';
}