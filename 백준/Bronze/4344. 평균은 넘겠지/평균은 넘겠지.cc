#include <bits/stdc++.h>
using namespace std;
int N,sum,st,cnt;
double avg;
int score[1001]={};
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin>>N;
    
    for(int i=0; i<N; i++){
        
        sum=0;
        cnt=0;
        cin>>st;
        
        for(int j=0; j<st; j++){
            cin>>score[j];
            sum += score[j];
        }
        
        avg= sum / (double)st;
        
        for(int k=0; k<st; k++){
            if(score[k]>avg){
                cnt+=1;
            }
        }
        
        cout<<fixed;
        cout.precision(3);
        cout<<(cnt / (double)st)*100<<"%"<<"\n";
    }
    
    return 0;
}