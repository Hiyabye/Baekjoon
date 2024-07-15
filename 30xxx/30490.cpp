#include <iostream>
using namespace std;

int solve(void) {
  long long n; cin >> n;

  if (n == 1 || n == 2) return n;
  for (int i=1; i<=64; i++) {
    if (n <= (1LL << i-1)) return i;
  }
  return 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}