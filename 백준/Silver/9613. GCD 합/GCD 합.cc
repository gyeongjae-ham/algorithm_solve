#include <iostream>
#include <vector>
typedef long long ll;

using namespace std;

int gcd(int a, int b) {
    if (b==0) return a;
    else return gcd(b, (a%b));
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    //1. 테스트 케이스 수 t을 입력받는다
    int t;
    cin>>t;
    
    while (t) {
        vector<int> v;
        int n;
        cin>>n;
        int num;
        //2. 테스트 케이스 숫자 n개를 입력받는다
        for(int i=0;i<n;i++) {    
            cin>>num;
            v.push_back(num);
        }
        
        int size = v.size();
        ll sn = 0;
        //3. 모든 조합의 gcd를 구해서 더해준다
        for(int i=0;i<size-1;i++) {
            for(int j=i+1;j<size;j++) {
                sn += gcd(v[i], v[j]);
            }
        }
        
        //4. 출력한다
        cout << sn << '\n';
        t--;
    }
    
    return 0;
}