#include <iostream>
using namespace std;

bool solve(void) {
  long long n; cin >> n;
  if (n == -1) return false;

  long long ans = 0;
  for (int i=0; i<32; i++) {
    ans = (ans << 1) | ((n & (1LL << i)) >> i);
  }
  cout << ans << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}