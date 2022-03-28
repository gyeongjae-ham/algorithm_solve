//
// Created by 함경재 on 2022/03/28.
//

#include <bits/stdc++.h>
using namespace std;
vector<int> v;
int main() {
    int n = 100;
    int b = 2;
    while (n>1) {
        v.push_back(n % b);
        n /= b;
    }
    if(n==1)v.push_back(1);
    reverse(v.begin(), v.end());
    for (int a: v) {
        if(a>=10)cout << char(a + 55);
        else cout << a;
    }
    return 0;
}