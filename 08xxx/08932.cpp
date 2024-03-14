#include <cmath>
#include <iostream>
using namespace std;

void solve(void) {
  int ans = 0;

  double p; cin >> p;
  ans += 9.23076 * pow(26.7 - p, 1.835);

  cin >> p;
  ans += 1.84523 * pow(p - 75, 1.348);

  cin >> p;
  ans += 56.0211 * pow(p - 1.5, 1.05);

  cin >> p;
  ans += 4.99087 * pow(42.5 - p, 1.81);

  cin >> p;
  ans += 0.188807 * pow(p - 210, 1.41);

  cin >> p;
  ans += 15.9803 * pow(p - 3.8, 1.04);

  cin >> p;
  ans += 0.11193 * pow(254 - p, 1.88);

  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}