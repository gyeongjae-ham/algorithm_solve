#include <bits/stdc++.h>

using namespace std;

int n, c;
int m,y = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        y+= (c/30+1) * 10;
        m+= (c/60+1) * 15;
    }
    
    if (m < y) cout << "M " << m;
	else if (m > y) cout << "Y " << y;
	else if (m == y) cout << "Y M " << m;
    
    return 0;
}