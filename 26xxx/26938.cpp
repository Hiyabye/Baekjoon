#include <iostream>
using namespace std;

inline double k(int e, int h, int p) {
  return e * h * p / 100000.0;
}

inline int b(int h, int l, int p) {
  return (h + l - 1) / l * p;
}

void solve(void) {
  int h, p; cin >> h >> p;

  int ans = 1;
  while (k(60, h*ans, p) + b(h*ans, 1000, 5) <= k(11, h*ans, p) + b(h*ans, 8000, 60)) ans++;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}