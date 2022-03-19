//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>

using namespace std;
int v[10];
int main() {
    for (int i = 1; i <= 10; i++)v[i - 1] = i;
    for(int a:v) cout << a << " ";
    cout << "\n";

    auto a = find(v, v + 10, 100);
    if(a==v+10) cout << "not found" << "\n";
    cout << "\n";

    return 0;
}