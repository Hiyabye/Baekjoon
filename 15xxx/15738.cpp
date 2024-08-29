#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k, m; cin >> n >> k >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  while (m--) {
    int i; cin >> i;
    if (i > 0) {
      if (i-k+1 >= 1) k = i-k+1;
    } else {
      if (2*n-k+i+1 <= n) k = 2*n-k+i+1;
    }
  }
  cout << k;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}