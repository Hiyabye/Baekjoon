#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int s, c, o, n; cin >> s >> c >> o >> n;

  cout << min((s+n)/3, (c+2*o)/6);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}