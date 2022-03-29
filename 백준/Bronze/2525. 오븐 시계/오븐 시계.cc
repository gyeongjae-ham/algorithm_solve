#include <bits/stdc++.h>
using namespace std;
int h,m,t,ht;

int main(){
    cin>>h>>m>>t;
    if((m+t)>60){
        ht=(m+t)/60;
        if((h+ht)>23){
            h=h+ht-24;
            m=(m+t)%60;
        }
        else {
            h=h+ht;
            m=(m+t)%60;
        }
    }
    else if((m+t)==60){
        ht=1;
        if((h+ht)>23){
            h=0;
            m=0;
        }
        else {
            h=h+ht;
            m=0;
        }
    }
    else {
        m=m+t;
    }
    
    cout<<h<<' '<<m;
    return 0;
}