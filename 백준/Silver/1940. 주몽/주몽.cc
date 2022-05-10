#include <bits/stdc++.h>
using namespace std;
// 10만 더하기 10만은 20만이므로
// 이 문제의 최대값이 20만을 넘을 수 없으므로 예외 처리 해주면 좋다
// 순서가 상관없다 -> 조합 이용하자 2개 조합 -> 이중 for문 3개보다 많으면 교안에 있는 combination으로 풀자!!
int n, m, a[15001], cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>a[i]; // 조합할 숫자들을 담아주고,
    sort(a, a+n); // 정렬해준다
// ====================== 강의 내용 부분 시간 초과 뜸 ===========================
//    if(m>200000) cout<<0<<"\n";
//    else{
//        for(int i=0; i<n; i++){
//            for(int j=i+1; i<n; j++){
//                if(a[i]+a[j]==m) cnt++; // 조합 중 m이 되는 조합이 있다면 cnt를 늘려준다
//            }
//        }
//        cout<<cnt<<"\n";
// =========================================================================
    int s = 0;
	int e = n-1;
	
	while(s<e){
		if(a[s]+a[e] == m){ cnt++; e--; s++; }
		if(a[s]+a[e] >  m) e--;
		if(a[s]+a[e] <  m) s++;
	}
    cout<<cnt<<"\n";
    return 0;
}