#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0)
#define ll long long
#define X first
#define Y second

int n,m;
int arr[10];
bool isused[10001];
vector<int> v;

void func(int k) {
  // m개의 수를 다 정했으면 출력
  if(k==m) {
    for(int i=0;i<m;i++) {
      cout<<arr[i]<<' ';
    }
    cout<<'\n';
    return;
  }
  
  for(int i=0;i<n;i++) {
    if(!isused[v[i]]) {
      arr[k] = v[i];
      isused[v[i]] = 1;
      func(k+1);
      isused[v[i]] = 0;  
    }
  }
}

int main(void) {
  fastio;
  cin>>n>>m;
  for(int i=0;i<n;i++) {
    int num;
    cin>>num;
    v.push_back(num);
  }
  sort(v.begin(), v.end());
  func(0);
  return 0;
}