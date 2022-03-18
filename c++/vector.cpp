//
// Created by 함경재 on 2022/03/18.
//

#include <bits/stdc++.h>

using namespace std;
vector<int> v;
int main() {
    for (int i = 1; i <= 10; i++) v.push_back(i);
    for(int a:v ) cout << a << " ";
    cout << "\n";
    v.pop_back();

    for(int a:v) cout << a << " ";
    cout << "\n";

    v.erase(v.begin(), v.begin() + 1);

    for(int a:v) cout << a << " ";
    cout << "\n";

    auto a = find(v.begin(), v.end(), 100);
    if(a==v.end()) cout << "not found" << "\n";

    fill(v.begin(), v.end(), 10);
    for(int a:v) cout << a << " ";
    cout << "\n";
    v.clear();
    cout << "아무것도 없을까?" << "\n";
    for(int a:v) cout << a << " ";
    cout << "\n";
    return 0;
}