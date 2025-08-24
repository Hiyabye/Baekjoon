#include <iostream>
using namespace std;

bool solve(void) {
  long long n; cin >> n;
  if (n == 0) return false;

  long long k = 1;
  while (k * 3 <= n) k *= 3;
  while (k) {
    if (n >= k) n -= k;
    k /= 3;
  }
  return n == 0;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "YES" : "NO");
  return 0;
}