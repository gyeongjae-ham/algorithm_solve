#include <bits/stdc++.h>
using namespace std;
// 옷들의 조합 / 이름과 종류 / 이름은 상관없다. / 가짓수
int t, n;
string a, b;
int main(){
    cin>>t;
    while(t--){
        map<string, int> _map; // 이름은 필요없으니까 버리고, 종류별로 개수를 맵에 담을거니까 String int로 만들어주고
        cin>>n; // 의상 개수를 받고
        for(int i=0; i<n; i++){
            cin>>a>>b;
            _map[b]++;
        }
        long long ret = 1; // 경우의 수는 항상 정수보다 클 가능성이 있으므로 long long으로 선언해준다
        for(auto c : _map){
            ret *= ((long long)c.second + 1); // 안 입는 것도 갯수로 쳐서 곱해야 하므로 1을 더해주고 각 의상의 개수만큼 곱해준다
        }
        ret--; // 안 입는 것과 안 입는 것일 경우는 벌거벗은 경우이므로 빼줘야 한다
        cout<<ret<<"\n";
    }
    return 0;
}