#include <iostream>
#include <algorithm>

using namespace std;

long long a[100001][2];
long long d[100001][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //d[n] = 2 * i;
    //d[n][0] -> n번째에서 스티커를 안뗌 앞에 0,1,2
    //d[n][1] -> n번째에서 위에 스티커를 뗌 앞에 0,2 가능
    //d[n][2] -> n번째에서 아래 스티커를 뗌 앞에 0,1 가능
    
    //1. 테스트 케이스 t
    int t;
    cin>>t;
    
    while (t--) {
        //2. 스티커 개수 n
        int n;
        cin>>n;
        //3. 스티커 점수
        for(int i=0;i<=1;i++) {
            for(int j=1;j<=n;j++) {
                cin>>a[j][i];
            }
        }
        
        //d[0]은 스티커가 없으므로 세 경우 모두 다 0
        d[0][0] = d[0][1] = d[0][2] = 0;
        for(int i=1;i<=n;i++) {
            //n번째에서 스티커를 떼지 않으면 0,1,2 경우 모두 다 올 수 있다
            d[i][0] = max({d[i-1][0], d[i-1][1], d[i-1][2]});
            //n번째에서 위쪽을 떼면, 0,2 가능
            d[i][1] = max(d[i-1][0], d[i-1][2]) + a[i][0];
            //n번째에서 아래쪽을 떼면, 0,1 가능
            d[i][2] = max(d[i-1][0], d[i-1][1]) + a[i][1];
        }
        
        long long ans = max({d[n][0], d[n][1], d[n][2]});
        cout<<ans<<'\n';
    }
    
    
    return 0;
}