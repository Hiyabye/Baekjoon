#include <iostream>
using namespace std;

inline bool check(int k) {
  while (k) {
    if (k % 10 == 0) return false;
    k /= 10;
  }
  return true;
}

void solve(void) {
  int k; cin >> k;

  while (!check(++k));
  cout << k << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}