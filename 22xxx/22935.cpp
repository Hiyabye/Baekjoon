#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  n = (n - 1) % 28 + 1;
  if (n > 15) n = 30 - n;

  for (int i=3; i>=0; i--) {
    cout << (n & (1 << i) ? "딸기" : "V");
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}