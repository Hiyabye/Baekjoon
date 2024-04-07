#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double p, c; cin >> p >> c;

  cout << fixed << setprecision(6) << p / (c + 100) * 100 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}