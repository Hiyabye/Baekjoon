#include <iostream>
using namespace std;

bool solve(void) {
  double c; cin >> c;
  if (c == 0) return false;

  int ans = 0;
  double sum = 0;
  while (sum < c) {
    ans++;
    sum += 1.0 / (ans+1);
  }
  cout << ans << " card(s)\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}