#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n;
int arr[15];
int num[15];
bool isused[15];

void func(int k) {
  if(k==6) {
    bool flag = true;
    int tmp = -1;
    for(int i=0;i<6;i++) {
      if(tmp > num[arr[i]]) flag = false;
      tmp = num[arr[i]];
    }
    
    if(flag) {
      for(int i=0;i<6;i++) {
        cout<<num[arr[i]]<<' ';
      }
      cout<<'\n';
    }
    return;
  }
  
  for(int i=0;i<n;i++) {
    if(!isused[i]) {
      arr[k] = i;
      isused[i] = 1;
      func(k + 1);
      isused[i] = 0;
    }
  }
}

int main(void) {
  fastio;
  while(true) {
    cin>>n;
    if(n==0) break;
    for(int i=0;i<n;i++) {
      cin>>num[i];
    }
    sort(num, num+n);
    func(0);
    cout<<'\n';
    fill(num, num+n, 0);
    fill(arr, arr+n, 0);
  }
  return 0;
}