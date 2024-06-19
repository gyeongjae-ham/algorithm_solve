#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //연속합 O(N)을 구한 후
    //한 개의 수를 제거한 N을 한번 더 풀면 구할 수 있다
    //하지만 범위가 100,000이라서 N^2이면 시간초과가 발생한다
    //그러므로 바이토닉 문제처럼 두 개로 나눠서 풀어야 한다
    
    //1. 수열의 크기 n
    int n;
    cin>>n;
    //2. 수열 입력
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    //3. 그냥 연속합 구하기
    vector<int> d(n);
    vector<int> dr(n);
    
    for(int i=0;i<n;i++) {
        d[i] = a[i];
        if (i == 0) continue;
        if (d[i] < d[i-1] + a[i]) {
            d[i] = d[i-1] + a[i];
        }
    }
    
    //4. 반대로 오는거 한번더 구하기
    for(int i=n-1;i>=0;i--) {
        dr[i] = a[i];
        if (i == n-1) continue;
        if (dr[i] < dr[i+1] + a[i]) {
            dr[i] = dr[i+1] + a[i]; 
        }
    }
    
    //5. 먼저 수 제거 안한 상태에서 연속합 가장 큰 거 찾기
    int ans = d[0];
    for(int i=1;i<n;i++) {
        if (ans < d[i]) {
            ans = d[i];
        }
    }
    
    //6. 수 제거한 상태에서 연속합 가장 큰 거 찾기
    for(int i=1;i<n-1;i++) {
        if (ans < d[i-1] + dr[i+1]) {
            ans = d[i-1] + dr[i+1];
        }
    }
    
    cout<<ans<<'\n';
        
    return 0;
}