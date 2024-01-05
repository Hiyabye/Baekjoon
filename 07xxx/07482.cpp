#include <iostream>
#include <iomanip>
using namespace std;

void solve(void) {
  double a; cin >> a;

  cout << fixed << setprecision(10) << a / 6 << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}