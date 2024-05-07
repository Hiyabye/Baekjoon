#include <iostream>
using namespace std;

bool solve(int idx) {
  int n; cin >> n;
  if (n == 0) return false;

  int ans = 0;
  double max_val = 0;
  while (n--) {
    double d, p; cin >> d >> p;
    if (d * d / p > max_val) {
      max_val = d * d / p;
      ans = d;
    }
  }
  cout << "Menu " << idx << ": " << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}