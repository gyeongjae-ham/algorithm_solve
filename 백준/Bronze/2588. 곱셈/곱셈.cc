#include <bits/stdc++.h>
using namespace std;
int a,b;
int main(){
    cin>>a>>b;
    int n1=b%10;
    int n2=(b%100)/10;
    int n3=b/100;
    
    cout<<a*n1<<"\n";
    cout<<a*n2<<"\n";
    cout<<a*n3<<"\n";
    cout<<a*b;
    
    return 0;
}