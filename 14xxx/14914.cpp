#include <iostream>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int a, b; cin >> a >> b;

  int g = gcd(a, b);
  for (int i=1; i<=g; i++) {
    if (!(g % i)) cout << i << " " << a/i << " " << b/i << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}