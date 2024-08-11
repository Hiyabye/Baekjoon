#include <iostream>
#include <vector>
using namespace std;

inline int calc(int m) {
  return 30 - (m == 2) + (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12);
}

inline bool check(const vector<int> &v, int m, int d) {
  if (m / 10 && v[m / 10]) return false;
  if (d / 10 && v[d / 10]) return false;
  return !v[m % 10] && !v[d % 10];
}

void solve(void) {
  vector<int> v(10);
  for (int i=0; i<10; i++) cin >> v[i];

  int ans = 0;
  for (int i=1; i<=12; i++) {
    for (int j=1; j<=calc(i); j++) {
      if (check(v, i, j)) ans++;
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}