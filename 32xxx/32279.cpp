#include <iostream>
using namespace std;

inline int calc(int n, int p, int q, int r, int s, int a1) {
  if (n == 1) return a1;
  else if (n & 1) return r * calc(n / 2, p, q, r, s, a1) + s;
  else return p * calc(n / 2, p, q, r, s, a1) + q;
}

void solve(void) {
  int n; cin >> n;
  int p, q, r, s; cin >> p >> q >> r >> s;
  int a1; cin >> a1;

  int ans = 0;
  for (int i=1; i<=n; i++) ans += calc(i, p, q, r, s, a1);
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}