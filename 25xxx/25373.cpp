#include <iostream>
using namespace std;

long long solve(void) {
  long long n; cin >> n;

  if (n <= 28) {
    if (n <= 1) return 1;
    if (n <= 3) return 2;
    if (n <= 6) return 3;
    if (n <= 10) return 4;
    if (n <= 15) return 5;
    if (n <= 21) return 6;
    return 7;
  }

  long long ans = n / 7;
  while ((ans-3)*7 < n) ans++;
  return ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}