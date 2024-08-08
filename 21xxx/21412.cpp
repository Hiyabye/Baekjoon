#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int n; cin >> n;

  for (int i=n/2; i>=1; i--) {
    if (gcd(i, n-i) == 1) {
      cout << i << " " << n-i;
      return;
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}