#include <iostream>
using namespace std;

bool solve(void) {
  int h, m; cin >> h >> m;
  int t = h * 60 + m;

  return (390 <= t && t <= 540) ||
         (590 <= t && t <= 600) ||
         (650 <= t && t <= 660) ||
         (710 <= t && t <= 720) ||
         (770 <= t && t <= 830) ||
         (880 <= t && t <= 890) ||
         (940 <= t && t <= 950) ||
         (1000 <= t && t <= 1370);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "Yes" : "No");
  return 0;
}
