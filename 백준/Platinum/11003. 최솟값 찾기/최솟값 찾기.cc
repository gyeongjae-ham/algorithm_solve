#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    deque<pair<int, int>> dq;

    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        // new number is always the biggest number in deque
        // deque.front number is the smallest number in deque
        // so, if new number is smaller than deque.back number do deque.pop_back
        while (!dq.empty() && dq.back().second >= num) {
            dq.pop_back();
        }
        dq.push_back({i, num});

        // if dq.front number's index is out of range do d.pop_front
        if (dq.front().first <= i - m) {
            dq.pop_front();
        }

        cout << dq.front().second << " ";
    }

  return 0;
}