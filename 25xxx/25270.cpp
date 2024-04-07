#include <iostream>
using namespace std;

int solve(void) {
  int n; cin >> n;

  for (int i=1; i<=100; i++) {
    if (n < i*100+49) return i*100-1;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}