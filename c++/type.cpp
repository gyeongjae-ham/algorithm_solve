//
// Created by 함경재 on 2022/03/17.
//

#include <bits/stdc++.h>

using namespace std;

int ret = 1;
void a() {
    ret = 2;
    cout << ret << "\n";
    return;
}

double d() {
    return 1.2333;
}
int main() {
    a();
    double res = d();
    cout << res << "\n";
    return 0;
}
