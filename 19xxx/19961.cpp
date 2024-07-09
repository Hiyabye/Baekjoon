#include <iostream>
using namespace std;

inline double calc(int t, int v, int x) {
  int r = x / (v * t), q = x % (v * t);

  return r ? (q ? 2.0*r*t+q/v : (2.0*r-1)*t) : (double)q/v;
}

void solve(void) {
  int t1, v1, t2, v2; cin >> t1 >> v1 >> t2 >> v2;
  int x; cin >> x;

  cout << (calc(t1, v1, x) < calc(t2, v2, x) ? "First" :
           calc(t1, v1, x) > calc(t2, v2, x) ? "Second" : "Draw");
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}