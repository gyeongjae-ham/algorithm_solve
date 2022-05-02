#include <bits/stdc++.h>
using namespace std;
int a[9];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // 9명의 키를 받아서 배열을 생성한다
    for(int i=0; i<9; i++){
        cin >> a[i];
    }
    
    // do-while 순열을 사용하기 위해서 정렬을 먼저 해준다
    sort(a, a+9);
    
    // 오름차순 순열 동안 돌면서 sum이 100이 될때까지 더한다
    do{
        int sum=0;
        // index 0부터 6까지 합이 100이 되는 조합이 나올때까지 반복한다
        for(int i=0; i<7; i++) sum += a[i];
        if(sum==100) break;
    } while(next_permutation(a, a+9));
    // 해당하는 조합을 찾으면 0~6을 출력해주면 된다!!
    for(int i =0; i<7; i++) cout << a[i] << "\n";
    return 0;
}