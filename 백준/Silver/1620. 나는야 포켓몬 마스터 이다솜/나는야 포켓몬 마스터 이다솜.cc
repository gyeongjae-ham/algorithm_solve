#include <bits/stdc++.h>
using namespace std;
int n, m;
string s;
map<string, int> _map;
map<int, string> _map2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>n>>m;
    for (int i=0; i<n; i++){
        cin>>s; // 들어오는 문자열을 받고,
        _map[s] = i + 1; // 해당 문자열에 인덱스 번호를 넣어준다 +1은 0부터 시작하기 때문에 더해주는 것
        _map2[i+1] = s; // 반대로 해당 인덱스에 들어온 문자열을 넣어준다
    }
    for(int i=0; i<m; i++){
        cin>>s; // 문제로 나오는 것들 들어오고
        if(atoi(s.c_str()) == 0){ // 문자가 들어오면 0을 반환한다
            cout<<_map[s]<<"\n"; // map에서 해당 문자열의 인덱스 값을 출력
        }else{ // 숫자가 들어오면
            cout<<_map2[atoi(s.c_str())]<<"\n"; // map2에서 해당 인덱스의 문자열을 출력
        }
    }
    return 0;
}