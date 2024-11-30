#include <iostream>
using namespace std;

bool solve(void) {
  int n; cin >> n;

  for (int i=2; i<=9; i++) for (int j=1; j<=9; j++) {
    if (i == n || j == n || i * j == n) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}