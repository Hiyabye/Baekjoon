#include <iostream>
using namespace std;

inline bool prime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (!(n & 1)) return false;
  for (int i=3; i*i<=n; i+=2) {
    if (!(n % i)) return false;
  }
  return true;
}

bool solve(void) {
  int a; cin >> a;

  for (int i=2; i<=a/2; i++) {
    if (prime(i) && prime(a-i)) return true;
  }
  return false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) cout << (solve() ? "Yes" : "No") << "\n";
  return 0;
}