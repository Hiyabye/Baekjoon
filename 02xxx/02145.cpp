#include <iostream>
using namespace std;

int sum(int n) {
  int ret = 0;
  while (n) {
    ret += n % 10;
    n /= 10;
  }
  return ret;
}

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;

  while (n >= 10) n = sum(n);
  cout << n << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}