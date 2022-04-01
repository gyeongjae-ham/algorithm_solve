#include <bits/stdc++.h>
using namespace std;
int N,i;
double sum;
int main(){
    cin>>N;
    double score[N];
    for(i=0; i<N; i++){
        cin>>score[i];
    }
    sort(score, score + N);
    sum=0;
    for(i=0; i<N; i++){
        sum = sum + (score[i]/score[N-1])*100;
    }
    cout<<sum/N;
    return 0;
}