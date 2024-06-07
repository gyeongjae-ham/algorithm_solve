#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[n] = N개의 카드를 구매하기 위해서 지불해야 하는 금액의 최댓값
    //d[n] = max(d[n-i] + p[i]);
    //1<=i<=n
    //O(N^2)
    
    //1. 카드 n개 입력받는다
    int n;
    cin>>n;
    //2. 카드팩 정보 P를 받는다
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    
    //3. d의 값을 -1로 초기화 한다 min 값을 구하기 위해서
    vector<int> d(n+1);
    for(int i=1;i<=n;i++) d[i] = -1;
    d[0] = 0;
    
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            //4. d[i] == -1이면 아직 초기화 상태이므로, 값을 넣어주고
            // d[i] > d[i-j] + a[j] 면 더 작은 값을 찾아야 하므로 넣어준다
            if (d[i] == -1 || d[i] > d[i-j] + a[j]) {
                d[i] = d[i-j] + a[j];    
            }
        }
    }
    
    cout<<d[n]<<'\n';
    
    return 0;
}