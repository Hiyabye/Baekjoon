#include <iostream>
using namespace std;

bool check(int n, int l) {
  while (n) {
    if (n % 10 == l) return true;
    n /= 10;
  }
  return false;
}

int solve(void) {
  int n, l; cin >> n >> l;

  int i = 1;
  while (n) {
    if (!check(i++, l)) n--;
  }
  return i - 1;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}