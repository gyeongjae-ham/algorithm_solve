#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void convert(int num, int base) {
    if (num == 0) return;
    convert(num/base, base);
    cout<<num%base<<' ';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 미래세계 진법 a, 정이 진법 b를 입력받는다
    int a,b;
    cin>>a>>b;
    //2. 자리 수 개수 m을 입력받는다
    int m;
    cin>>m;
    //3. 숫자 m개를 입력받는다
    int ans = 0;
    for(int i=0;i<m;i++) {
        int x;
        cin>>x;
        //4. a진법을 10진법으로 변환한다
        ans = ans * a + x;
    }
    //5. 변환한 10진법 수를 b진법으로 변환한다
    convert(ans, b);
    
    return 0;
}