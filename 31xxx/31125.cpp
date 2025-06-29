#include <iostream>
using namespace std;

bool solve(void) {
  int s, n, f, m; cin >> s >> n >> f >> m;

  return n <= s-m && s-m <= n*f;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int b; cin >> b;
  while (b--) cout << (solve() ? "YES" : "NO") << "\n";
  return 0;
}