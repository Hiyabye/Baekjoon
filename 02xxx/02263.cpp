#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> in, post;

void pre(int inl, int inr, int postl, int postr) {
  if (inl > inr || postl > postr) return;

  int root = post[postr];
  cout << root << " ";

  int idx = find(in.begin(), in.end(), root) - in.begin();
  pre(inl, idx-1, postl, idx+postl-inl-1);
  pre(idx+1, inr, idx+postl-inl, postr-1);
}

void solve(void) {
  int n; cin >> n;
  in.resize(n); post.resize(n);
  for (int i=0; i<n; i++) cin >> in[i];
  for (int i=0; i<n; i++) cin >> post[i];

  pre(0, n-1, 0, n-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  solve();
  return 0;
}