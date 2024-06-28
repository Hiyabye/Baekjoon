#include <iostream>
using namespace std;

void solve(void) {
  int id, s, m, t; cin >> id >> s >> m >> t;

  cout << id << " " << s + m + t << " " << (s + m + t >= 55 && 2 * s >= 21 && 2 * m >= 15 && t >= 12 ? "PASS" : "FAIL") << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}