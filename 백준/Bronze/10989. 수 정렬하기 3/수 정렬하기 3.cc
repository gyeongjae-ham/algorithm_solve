#include <bits/stdc++.h>
using namespace std;
#define fi cin.tie(0)->sync_with_stdio(0)
#define ll long long

int n, num;
int arr[10002];

int main(void){
  fi;
  cin>>n;
  
  for(int i=0; i<n; i++) {
    cin>>num;
    arr[num]++;
  }
  
  for(int i=1; i<10001; i++) {
    for(int j=0; j<arr[i]; j++) {
      cout<<i<<"\n";
    }
  }
  return 0;
}