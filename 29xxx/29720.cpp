#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  cout << max(0, n-m*k) << " " << max(0, n-m*(k-1)-1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}