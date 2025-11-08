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

void solve(void) {
  int n; cin >> n;

  if (n & 1) cout << (n == 1 ? "1\n1 2" : "0") << "\n";
  else if (prime(n+1)) cout << "1\n1 " << n+1 << "\n";
  else cout << "0\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}