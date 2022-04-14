#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

// 틀린 내 풀이.. 흠 생각해보니 소수를 한 번 더하는 게 아니라서 
// 아예 잘못 설계한 코드입니다;;

// vector<int> eratos(int n) {
//    vector<int> v;
//    bool arr[5001];
//    fill_n(arr, 5001, 1);
//    arr[0]=false;
//    arr[1]=false;
//    for(int i=2; i<=5001; i++) {
//        if (arr[i]==false) continue;   
//        for(int j=i*2; j<=5001; j+=i) {
//            arr[j]=false;
//        }
//    }
//    for(int i=2; i<=n; i++) {
//        if(arr[i]) v.push_back(i);
//    }
//    return v;
//}

//int main() {
//    int T, N;
    
//    for(int i=0; i<T; i++) {
//        cin>>N;
//        vector<int> sn = eratos(N);
//        vector<int> res;
//        int sum=0;   
//        while(1) {
//            if(sum==N) break;
//            for(int i : sn) {
//                sum+=i;
//                res.push_back(i);
//           }
//        }
//        for(int j : res) {
//            cout<<j<<' ';
//        }
//        cout<<"\n";
//    }
//    return 0;
//}

// 찾은 풀이법()
// 에라토스테네스의 체를 이용해 4~10000범위의 소수를 먼저 구해 prime배열에 저장한다.
// 두 소수의 차이가 가장 작아야하므로 입력된 값의 절반을 기준으로 -1 +1을 반복하며 둘 다 소수가 되는 경우를 찾으면 된다.

int main() {
    int num, max = 0;
    cin >> num;
    int even[num];
    for(int i = 0; i < num; i++) {
        cin >> even[i];
        if(even[i] > max)
            max = even[i];
    }
    bool prime[max+1];
    fill_n(prime, max + 1, 1);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i <= sqrt(max); i++)
        if(prime[i] == true)
            for(int j = i*2; j <= (max); j += i)
                prime[j] = false;

    for(int t = 0; t < num; t++)
    {
        for(int j = even[t]/2; j > 0; j--)
        {
            if(prime[j] && prime[even[t]-j])
            {
                cout << j << ' ' << even[t]-j << '\n';
                break;
            }
        }
    }
}