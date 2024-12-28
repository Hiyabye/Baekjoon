#include <iostream>
using namespace std;

inline bool prime(int n) {
  if (n < 2) return false;
  for (int i=2; i*i<=n; i++) if (n % i == 0) return false;
  return true;
}

void solve(void) {
  int n; cin >> n;

  cout << "Input value: " << n << "\n";
  if (prime(n)) cout << "Would you believe it; it is a prime!";
  else {
    int d = 1;
    while (!prime(n+d) && !prime(n-d)) d++;
    cout << "Missed it by that much (" << d << ")!";
  }
  cout << "\n\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}