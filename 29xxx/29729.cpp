#include <iostream>
using namespace std;

void solve(void) {
  int s0, n, m; cin >> s0 >> n >> m;

  int cur = 0;
  for (int i=0; i<n+m; i++) {
    int x; cin >> x;
    cur += x ? 1 : -1;
    if (cur > s0) s0 <<= 1;
  }
  cout << s0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}