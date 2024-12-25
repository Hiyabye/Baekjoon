#include <iostream>
using namespace std;

void solve(void) {
  long long r, k, m; cin >> r >> k >> m;

  for (long long i=0; i<m/k; i++) {
    r >>= 1;
    if (!r) break;
  }
  cout << r;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}