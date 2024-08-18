#include <iostream>
#include <unordered_set>
using namespace std;

int gcd(int a, int b) {
  return b ? gcd(b, a % b) : a;
}

void solve(void) {
  int r, g; cin >> r >> g;

  int n = gcd(r, g);
  unordered_set<int> s;
  for (int i=1; i*i<=n; i++) {
    if (n % i) continue;
    s.insert(i);
    s.insert(n / i);
  }

  for (int x : s) {
    cout << x << " " << r / x << " " << g / x << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}