#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    
    vector<int> nums(t);
    vector<int> ans(t);
    stack<int> s;
    
    // 1. 모든 숫자를 입력받은 배열
    for (int i=0;i<t;i++) {
        cin >> nums[i];
    }
    
    // 2. 배열의 첫 번째 숫자의 idx를 stack 담는다
    s.push(0);
    
    for (int i=1;i<t;i++) {
        // 3-1. stack이 비어있으면 비교할 숫자의 idx가 없으므로 우선 담아준다
        if (s.empty()) {
            s.push(i);
        }
        // 3-2. 다음 숫자부터 stack에 담긴 idx에 해당하는 숫자보다 크다면 해당 숫자의 오큰수 이므로, answer 배열의 해당 idx 위치에 오큰수를 담는다
        while (!s.empty() && nums[s.top()] < nums[i]) {
            ans[s.top()] = nums[i];
            // 오큰수 찾았으니까 해당 숫자 idx 제거
            s.pop();
        }
        // 3-3. 현재 숫자가 오큰수인 숫자 다 찾은 다음에 현재 숫자 idx 넣어주기
        s.push(i);
    }
    
    // 4. stack에 남아있는 모든 idx에 대해서 answer에 해당 idx 위치에 -1을 담는다
    while (!s.empty()) {
        ans[s.top()] = -1;
        s.pop();
    }
    
    
    // 5. 출력하기
    for (auto c : ans) {
        cout << c << ' ';
    }
    
    return 0;
}