#include <algorithm>
#include <iostream>
using namespace std;

inline long long square(long long x) { return x * x; }

void solve(void) {
  long long a, b, c; cin >> a >> b >> c;

  cout << square(a+b+c-max({a, b, c})) + square(max({a, b, c})) << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}