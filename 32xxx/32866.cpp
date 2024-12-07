#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int x; cin >> x;

  cout << fixed << setprecision(7) << 10000.0 / (100.0 - x) - 100.0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}