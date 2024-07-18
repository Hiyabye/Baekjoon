#include <iomanip>
#include <iostream>
using namespace std;

void solve(void) {
  double t, r, v; cin >> t >> r >> v;

  cout << fixed << setprecision(7) << max(0.0, v-2*r/t);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}