//
// Created by 함경재 on 2022/03/19.
//

#include <bits/stdc++.h>

using namespace std;
int a[5];
int temp[5];
int main() {
    for (int i = 0; i < 5; i++) a[i] = i;
    memcpy(temp, a, sizeof(a));
    for(int i: temp) cout << i << " ";
    return 0;
}