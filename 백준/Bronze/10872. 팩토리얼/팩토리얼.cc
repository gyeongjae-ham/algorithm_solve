#include <iostream>

using namespace std;

const int MAX = 1000000;
bool check[MAX+1];

int fact(int a) {
    if (a==0) return 1;
    int ans = 1;
    for(int i=2; i<=a;i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 숫자 n을 입력받는다
    int n;
    cin>>n;
    //2. 팩토리얼을 출력한다
    cout<<fact(n);
    
    return 0;
}