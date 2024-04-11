#include <iomanip>
#include <iostream>
using namespace std;

bool solve(int idx) {
  int l; cin >> l;
  if (l == 0) return false;
  int n; cin >> n;

  cout << "User " << idx << "\n";
  while (n--) {
    double x; cin >> x;
    cout << fixed << setprecision(5) << x * l / 100000.0 << "\n";
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int idx = 1;
  while (solve(idx++));
  return 0;
}