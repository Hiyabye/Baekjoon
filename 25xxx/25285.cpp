#include <iostream>
using namespace std;

int solve(void) {
  double a, b; cin >> a >> b;
  double c = b / (a / 100) / (a / 100);

  if (a < 140.1) return 6;
  if (a < 146) return 5;
  if (a < 159 || a >= 204) return 4;
  if (a < 161) return (16 <= c && c < 35) ? 3: 4;
  if (c < 16 || c >= 35) return 4;
  if (c < 18.5 || c >= 30) return 3;
  if (c < 20 || c >= 25) return 2;
  return 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}