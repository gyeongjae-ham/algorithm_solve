#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define X first
#define Y second

int n,r,c;

int func(int n, int r, int c) {
  if(n==0) return 0;
  int half = pow(2, n-1);
  // first matrix
  if(r<half && c<half) return func(n-1, r, c);
  // second
  if(r<half && c>=half) return half*half + func(n-1, r, c-half);\
  // third
  if(r>=half && c<half) return 2*half*half + func(n-1, r-half, c);
  // fourth
  return 3*half*half + func(n-1, r-half, c-half);
}

int main(void) {
  ios::sync_with_stdio(0), cin.tie(0);
  
  cin>>n>>r>>c;
  cout<<func(n,r,c);
  return 0;
}