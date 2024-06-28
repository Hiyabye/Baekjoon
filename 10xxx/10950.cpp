#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  cout << a + b << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}