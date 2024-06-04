#include <iostream>

using namespace std;

const int MAX = 1000000;
bool check[MAX+1];
int pn;
int prime[MAX+1];

void era() {
    check[0] = check[1] = true;
    for (int i = 2; i <= MAX; i++) {
        if (check[i] == false) {
            prime[pn++] = i;
            for (int j = i + i; j <= MAX; j += i) {
                check[j] = true;
            }    
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 에라토스테네스로 1,000,000까지 구해놓는다
    era();
    //2. 숫자 t를 입력받는다 while t == 0까지 돌린다
    int t;
    while (cin>>t) {
        if (t==0) break;
        
        //3. prime[0]은 2이고, 홀수만 찾으니까 1부터
        for (int i=1; i < pn; i++) {
            //4. 가장 낮은 수의 소수가 가장 큰 차이를 가지므로 바로 중단
            if (check[t-prime[i]] == false) {
                cout<<t<<" = "<<prime[i]<<" + "<<t-prime[i]<<'\n';
                break;
            }
        }
    }
    
    return 0;
}