#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  for (int i=0; i<n; i++) cin >> a[i];
  for (int i=0; i<m; i++) cin >> b[i];

  cout << accumulate(a.begin(), a.end(), 0) - accumulate(b.begin(), b.end(), 0);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}