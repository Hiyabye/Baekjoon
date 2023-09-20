#include <iostream>
using namespace std;

void solve(void) {
  int t, s; cin >> t >> s;

  cout << (12 <= t && t <= 16 && s == 0 ? "320" : "280");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}