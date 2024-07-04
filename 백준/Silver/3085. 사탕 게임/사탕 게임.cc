#include <iostream>
#include <algorithm>

using namespace std;

int check(vector<string> &a) {
    int n = a.size();
    int ans = 1;
    
    for(int i=0;i<n;i++) {
        int cnt = 1;
        // 열 비교
        // 비교할 대상이 있어야 하니까 1부터 시작
        for(int j=1;j<n;j++) {
            if (a[i][j] == a[i][j-1]) {
                cnt += 1;
            } else {
                cnt = 1;
            }
            if (ans < cnt) ans = cnt;
        }
        // 행 비교
        cnt = 1;
        for(int j=1;j<n;j++) {
            if (a[j][i] == a[j-1][i]) {
                cnt += 1;
            } else {
                cnt = 1;
            }
            if (ans < cnt) ans = cnt;
        }
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // N^2 * N^2 = N^4의 방법으로 푸는 문제
    // 50 ^ 4 라서 풀 수 있다
    
    //n 입력받기
    int n;
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) {
            //오른쪽 인접한 곳과 swap
            if (j+1 < n) {
                swap(a[i][j], a[i][j+1]);
                int tmp = check(a);
                if (ans < tmp) ans = tmp;
                swap(a[i][j], a[i][j+1]);
            }
            //아래 인접한 곳과 swap
            if (i+1 < n) {
                swap(a[i][j], a[i+1][j]);
                int tmp = check(a);
                if (ans < tmp) ans = tmp;
                swap(a[i][j], a[i+1][j]);
            }
        }
    }
    
    cout<<ans<<'\n';
    return 0;
}