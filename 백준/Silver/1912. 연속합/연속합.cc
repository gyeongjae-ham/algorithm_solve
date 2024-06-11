#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //a[i] = 실제로 입력받은 수
    //d[i] = i까지 연속합의 최대값
    //i번째 수가 i-1번째와 연속되는지 확인
    //d[i] = max(d[i-1] + a[i], a[i]) 앞의 연속값들이 더했을 때 음수일 수 있으므로 자기 자신이 더 클 수도 있다
    
    //1. n을 입력받는다
    int n;
    cin>>n;
    //2. n개 만큼 정수를 입력받는다
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    
    vector<int> d(n);
    for(int i=0;i<n;i++) {
        d[i] = v[i];
        if (i == 0) continue; // 0번째 보다 앞의 수가 없으니까 그냥 continue
        if (d[i] < d[i-1] + v[i]) {
            d[i] = d[i-1] + v[i];
        }
    }
    
    cout<<*max_element(d.begin(), d.end());
    
    return 0;
}