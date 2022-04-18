#include <bits/stdc++.h>
using namespace std;

// 이렇게 풀었는데...;; 피타고라스 정리로 풀어야 한다 알았는데..
// int a,b,c;
// int main() {
//    while(true) {
//        cin>>a>>b>>c;
//        
//        if(a==0 || b==0 || c==0) break;
//        
//        if(a%3==0 && b%4==0 && c%5==0) {
//            cout<<"right"<<"\n";
//        }
//        else {
//            cout<<"wrong"<<"\n";
//        }
//    }
//    
//    return 0;
//}

int a,b,c;

int main() {
    while (true) {
        cin>>a>>b>>c;
        if (a==0) break;
        if(max(a,b)==a) {
            if(max(a,c)==a) {
                if(a*a == b*b + c*c) {
                    cout<<"right"<<"\n";
                }
                else {
                    cout<<"wrong"<<"\n";
                }
            }
            else {
                if(c*c == b*b + a*a) {
                    cout<<"right"<<"\n";
                }
                else {
                    cout<<"wrong"<<"\n";
                }
            }
        }
        else if(max(a,b)==b) {
            if(max(b,c)==b) {
                if(b*b == a*a + c*c) {
                    cout<<"right"<<"\n";
                }
                else {
                    cout<<"wrong"<<"\n";
                }
            }
            else {
                if(c*c == b*b + a*a) {
                    cout<<"right"<<"\n";
                }
                else {
                    cout<<"wrong"<<"\n";
                }
            }
        }
    }
    return 0;
}