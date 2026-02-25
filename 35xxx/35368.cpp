#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, x, m; cin >> n >> x >> m; x--;
  vector<int> v(n, 0);
  while (m--) {
    int r; cin >> r; r--;
    v[r]++;
  }

  int a = 0, b = 0;
  for (int i=0; i<x; i++) a += v[i];
  for (int i=n-1; i>=x; i--) b += v[i];
  cout << min(a, b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}