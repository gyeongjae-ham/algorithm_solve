#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sum(vector<int> &a) {
	long long ans = 0;
    for(int i=0; i<a.size(); i++){
        ans+=a[i];
    }
	return ans;
}
