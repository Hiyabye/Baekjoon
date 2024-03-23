#include <algorithm>
#include <iostream>
using namespace std;

void solve(void) {
  int l, c, n; cin >> l >> c >> n;

  while (c--) {
    int s, p; cin >> s >> p;
    cout << s + abs(p-n) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}