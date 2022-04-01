#include <bits/stdc++.h>
using namespace std;

int arr[10001]={0, };

int self_num(int num){
    int sum = num;
    
    while(num!=0){
        sum+=num%10; // sum에 num%10 한만큼 더해주고
        num/=10; // num을 10으로 나눠서 일의 자리까지 더할 때까지 반복한다
    }
    
    return sum;
}

int main(){
    int num=0;
    for(int i=1; i<10001; i++){
        num=self_num(i);
        if(num<=10000){
            arr[num]=1;
        }
    }
    
    for(int j=1; j<10000; j++){
        if(arr[j]==0){
            cout<<j<<"\n";
        }
    }
    return 0;
}