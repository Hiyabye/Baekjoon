#include <iostream>
using namespace std;

int contain(int n) {
  while (n > 0) {
    if (n % 10 == 7) return 1;
    n /= 10;
  }
  return 0;
}

int divisible(int n) {
  return n % 7 == 0;
}

void solve(void) {
  int n; cin >> n;

  cout << 2 * contain(n) + divisible(n);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}