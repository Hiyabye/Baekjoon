#include <iostream>
using namespace std;

int phi(int n) {
  int ret = n;
  for (int i=2; i*i<=n; ++i) {
    if (n % i) continue;
    ret -= ret / i;
    while (!(n % i)) n /= i;
  }
  if (n > 1) ret -= ret / n;
  return ret;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  cout << (n == 1 ? 0 : phi(n)) << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  while (solve());
  return 0;
}