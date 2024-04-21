#include <iostream>
using namespace std;

void solve(void) {
  int n; cin >> n;
  long long k, m1, m2; cin >> k >> m1 >> m2;

  long long ans = 0;
  while (n--) {
    long long h, s; cin >> h >> s;
    while (s--) {
      long long size; cin >> size;
      if (size * m1 < h || size * m2 > h * k) ans++;
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}