#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[i][j] = max(d[j]) + 1
    //j<i, a[j] < a[i]
    
    int n;
    cin>>n;
    vector<int> v(n);
    //1. 배열을 모두 입력받는다
    for(int i=0;i<n;i++) cin>>v[i];
    
    vector<int> d(n);
    for(int i=0;i<n;i++) {
        //2. 자기 자신도 증가수열이기 때문에 1을 선언한다
        d[i] = 1;
        //j는 i보다 이전이어야 한다
        for(int j=0;j<i;j++) {
            //3. j위치의 값이 현재 위치의 값보다 더 작아야 한다(증가 수열이므로)
            //   현재 위치의 값보다 이전 위치의 값 + 자기 자신이 더 크다면 이게 더 긴 수열이므로 d[i] 값을 업데이트 해준다
            if(v[j] < v[i] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
            }
        }
    }
    
    //4. 가장 긴 수열을 찾아서 출력한다
    cout<<*max_element(d.begin(), d.end())<<'\n';
    
    return 0;
}