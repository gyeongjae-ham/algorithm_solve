#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[i] = d[j]까지의 합 + a[i]값
    //d[i] = max(d[j] + a[i])
    
    //1. 수열 크기 n
    int n;
    cin>>n;
    
    //2. 수열 입력
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    //3. 전체 값 구하기
    vector<int> d(n);
    for(int i=0;i<n;i++) {
        d[i] = a[i];
        for(int j=0;j<i;j++) {
            if(a[j] < a[i] && d[i] < d[j] + a[i]) {
                d[i] = d[j] + a[i];
            }
        }
    }
    
    cout<<*max_element(d.begin(), d.end());
        
    return 0;
}