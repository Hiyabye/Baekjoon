#include <iostream>
#include <utility>
using namespace std;

bool solve(void) {
  int c; cin >> c;
  if (c == 0) return false;

  pair<int, int> ans = {1, c};
  for (int i=2; i*i<=c; i++) {
    if (c % i) continue;
    if (i + c / i < ans.first + ans.second) ans = {i, c / i};
  }
  cout << "Minimum perimeter is " << 2 * (ans.first + ans.second) << " with dimensions ";
  cout << ans.first << " x " << ans.second << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}