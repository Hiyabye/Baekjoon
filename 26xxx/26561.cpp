#include <iostream>
using namespace std;

void solve(void) {
  int p, t; cin >> p >> t;

  cout << p - (t/7) + (t/4) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}