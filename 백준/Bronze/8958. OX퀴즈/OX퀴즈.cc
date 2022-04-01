#include <bits/stdc++.h>
using namespace std;
string cs;
int N,i,cnt,sum;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>N;
    
    for(i=0; i<N; i++){
        cnt=0;
        sum=0;
        cin>>cs;
        for(char c : cs){
            if(c=='O'){
                cnt+=1;
                sum+=cnt;
            }
            else {
                cnt=0;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}