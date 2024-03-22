#include <iomanip>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  double c; cin >> c;
  int l; cin >> l;

  double ans = 0;
  while (l--) {
    double a, b; cin >> a >> b;
    ans += a * b;
  }
  cout << fixed << setprecision(7) << ans * c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}