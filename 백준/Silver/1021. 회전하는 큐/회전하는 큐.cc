#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    deque<int> dq;
    int n,m,i,cnt=0;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        dq.push_back(i);
    }
    
    while(m--){
        int idx, num;
        cin>>num;
        
        for(i=0;i<n;i++){
            if(dq[i]==num){
                idx=i;
                break;
            }
        }
        
        // 빼내려는 값의 인덱스가 왼쪽에 가까울 경우
        if(idx<dq.size()/2+1){
            for(i=0;i<dq.size();i++){
                if(dq.front()==num){
                    dq.pop_front();
                    break;
                }
                dq.push_back(dq.front());
                dq.pop_front();
                cnt++;
            }
        }
        // 빼내려는 값의 인덱스가 오른쪽에 가까울 경우
        else {
            for(i=0;i<dq.size();i++){
                if(dq.front()==num){
                    dq.pop_front();
                    break;
                }
                dq.push_front(dq.back());
                dq.pop_back();
                cnt++;   
            }
        }
    }
    
    cout<<cnt<<"\n";
    return 0;
}