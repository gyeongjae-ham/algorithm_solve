#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[i] = d[j]까지의 합 + a[i]값
    //d[i] = max(d[j] + a[i])
    //가장 긴 감소하는 부분 수열 구하는 방법들
    //1. 증가를 반대로 구하는 경우
    //2. d[i] = a[i]에서 **시작**하는 가장 긴 감소하는 부분 수열의 길이를 구하는 방법
    //   d[i] = max(d[j]) + 1
    //3. d[i] = a[i]에서 *끝나는* 가장 긴 감소하는 부분 수열의 길이
    //   d[i] = max(d[j]) + 1 (j < i && a[j] > a[i])
    
    //3번 방식으로 풀이
    
    //1. 수열의 크기
    int n;
    cin>>n;
    //2. 수열 입력
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    vector<int> d(n);
    for(int i=0;i<n;i++) {
        d[i] = 1;
        for(int j=0;j<i;j++) {
            if (a[j] > a[i] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
            }
        }
    }
    
    cout<<*max_element(d.begin(), d.end());
        
    return 0;
}