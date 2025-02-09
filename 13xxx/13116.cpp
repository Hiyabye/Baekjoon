#include <iostream>
using namespace std;

void solve(void) {
  int a, b; cin >> a >> b;

  while (a != b) {
    if (a > b) a >>= 1;
    else b >>= 1;
  }
  cout << a << "0\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}