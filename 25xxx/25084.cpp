#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

inline double area(int r) {
  return acos(-1) * r * r;
}

void solve(int idx) {
  int r, a, b; cin >> r >> a >> b;

  double ans = 0;
  while (r >= 1) {
    ans += area(r);
    r *= a;
    ans += area(r);
    r /= b;
  }
  cout << "Case #" << idx << ": " << fixed << setprecision(7) << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}