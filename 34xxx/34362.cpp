#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double n; cin >> n;

  cout << fixed << setprecision(4) << n - 0.3;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}