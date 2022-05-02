#include <bits/stdc++.h>
using namespace std;
int A, B, C, a, b, cnt[104], ret;
int main(){
    cin >> A >> B >> C; // 차량 대수 별 요금
    for(int i=0; i<3; i++){
        cin>>a>>b; // 주차된 시간
        for(int j=a; j<b; j++) cnt[j]++; // 주차된 시간 분마다 카운트를 늘려줌(카운트 수가 차량 대수)
    }
    for(int i=1; i<100; i++){
        if(cnt[i]){
            if(cnt[i]==1) ret+=A; // 차량이 한 대니까 요금만큼 더해주고
            else if(cnt[i]==2) ret+=B*2; // 두 대니까 *2
            else if(cnt[i]==3) ret+=C*3; // 세 대니까 *3
        }
    }
    cout<<ret<<"\n";
    return 0;
}