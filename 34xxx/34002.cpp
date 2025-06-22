#include <iostream>
using namespace std;

inline int ceil(int x, int y) {
  return (x + y - 1) / y;
}

void solve(void) {
  int a, b, c; cin >> a >> b >> c;
  int s, v; cin >> s >> v;
  int l; cin >> l;

  int t = 25000-100*l;
  if (t <= 30*c*v) cout << ceil(t, c);
  else if (t-30*c*v <= 30*b*s) cout << ceil(t-30*c*v, b) + 30*v;
  else cout << ceil(t-30*c*v-30*b*s, a) + 30*(s+v);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}