#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<long long> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  vector<long long> g(n, 0);
  for (int i=1; i<n; i++) {
    if (a[i] < a[i-1]) continue;
    g[i] = g[i-1] + a[i] - a[i-1];
  }
  cout << *max_element(g.begin(), g.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}