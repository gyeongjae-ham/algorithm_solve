#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. b진법 수 n과 b를 입력받는다 (string, int)
    string n;
    int b;
    cin>>n>>b;
    //2. '0' ~ '9' 사이의 값이면 '0'을 뺀 값을 ans에 더해준다
    int ans = 0;
    for(int i=0;i<n.size();i++) {
        if (n[i] >= '0' && n[i] <= '9') {
            ans = ans * b + (n[i] - '0');
        } else {
            //3. '9'이상의 값이면 'A'를 빼고 10을 더한 후 ans에 더해준다
            //'A' 값이 65이므로 뺀 후에 10을 더해줘야 한다
            ans = ans * b + (n[i] - 'A' + 10);
        }
        //4. 더하기 전에 ans에 b만큼 곱해서 자릿수를 이동시켜준다
        //ex) 10 -> 10*10 -> 100 + 3 -> 103 이 되도록
    }
    cout<<ans<<'\n';
    
    return 0;
}