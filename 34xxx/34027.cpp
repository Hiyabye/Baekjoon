#include <cmath>
#include <iostream>
using namespace std;

inline int calc(int n) {
  return (int)sqrt(n);
}

bool solve(void) {
  int n; cin >> n;

  return calc(n) * calc(n) == n;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << solve() << "\n";
  return 0;
}