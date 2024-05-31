#include <iostream>
using namespace std;

int digit(int x) {
  int cnt = 0;
  while (x) x /= 10, cnt++;
  return cnt;
}

long long pow10(int x) {
  long long ret = 1;
  while (x--) ret *= 10;
  return ret;
}

void solve(void) {
  long long n, m; cin >> n >> m;

  cout << m / pow10(digit(n)) + (m % pow10(digit(n)) >= n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}