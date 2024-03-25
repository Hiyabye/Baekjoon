#include <iostream>
using namespace std;

bool solve(void) {
  int a, b; cin >> a >> b;

  int ans = 0;
  for (int i=0; i<16; i++) {
    if ((a >> i) & 1) ans++;
  }
  return (ans & 1) == b;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "Valid" : "Corrupt") << "\n";
  return 0;
}