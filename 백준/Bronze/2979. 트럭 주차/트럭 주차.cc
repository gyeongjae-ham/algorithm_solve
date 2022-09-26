#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int arr[105];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a,b,c;
    cin>>a>>b>>c;
    for (int i=0;i<3; i++){
        int start, end;
        cin>>start>>end;
        for (int j=start; j<end;j++){
            arr[j]++;
        }
    }
    
    int sum=0;
    for(int i=0;i<105;i++){
        if(arr[i]==1){
            sum+=arr[i]*a;
        }
        else if(arr[i]==2){
            sum+=arr[i]*b;
        }
        else {
            sum+=arr[i]*c;
        }
    }
    cout<<sum<<"\n";
    return 0;
}