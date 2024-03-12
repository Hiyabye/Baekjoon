#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;
  int c, d; cin >> c >> d;

  cout << max(b, d) - min(a, c) - max(0, max(a, c) - min(b, d));
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}