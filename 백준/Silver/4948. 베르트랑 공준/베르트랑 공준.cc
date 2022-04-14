#include <bits/stdc++.h>
using namespace std;

int eratos(int num) {
    vector<int> v;
    bool arr[(123457*2)+1];
    fill_n(arr, (123457*2)+1, 1);
    arr[0]=false;
    arr[1]=false;
    
    for(int i=2; i<(123457*2)+1; i++) {
        if (arr[i]==false) continue;
        for(int j=i*2; j<=(123457*2)+1; j+=i) {
            arr[j]=false;
        }
    }
    
    for(int i=num+1; i<=2*num; i++) {
        if(arr[i]==true) {
            v.push_back(i);
        }
    }
    
    return v.size();
}

int main() {
    int num;
    
    while(1) {
        cin>>num;
        if(num==0) break;
        cout<<eratos(num)<<"\n";
    }
    return 0;
}