#include <iostream>
using namespace std;

inline bool prime(int n) {
  if (n <= 1) return false;
  if (n == 2) return true;
  if (!(n & 1)) return false;
  for (int i=3; i*i<=n; i+=2) {
    if (!(n % i)) return false;
  }
  return true;
}

bool solve(void) {
  int a, b; cin >> a >> b;

  return a + 2 == b && prime(a) && prime(b);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? 'Y' : 'N') << "\n";
  return 0;
}