#include <iostream>
using namespace std;

inline bool odd(int n) {
  return n & 1;
}

inline bool square(int n) {
  int x = 0;
  while (x * x < n) x++;
  return x * x == n;
}

void solve(void) {
  int n; cin >> n;

  cout << (odd(n) ? (square(n) ? "OS" : "O") : (square(n) ? "S" : "EMPTY")) << "\n";
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
	return 0;
}