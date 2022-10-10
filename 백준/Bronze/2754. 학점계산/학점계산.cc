#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    cin>>s;
    double res=0;
    cout << fixed;
	cout.precision(1);
    
    switch(s[0]) {
        case 'A':
            res+=4.0;
            break;
        case 'B':
            res+=3.0;
            break;
        case 'C':
            res+=2.0;
            break;
        case 'D':
            res+=1.0;
            break;
    }
    switch(s[1]){
        case '+':
            res+=0.3;
            break;
        case '-':
            res-=0.3;
            break;
    }
    cout<<res<<"\n";
    
    return 0;
}