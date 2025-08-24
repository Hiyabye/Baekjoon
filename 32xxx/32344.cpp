#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline long long calc(long long a, long long b, long long c, long long d) {
  return (b-a+1) * (d-c+1);
}

void solve(void) {
  int r, c; cin >> r >> c;
  int n; cin >> n;
  vector<int> v1(n+1, -1), v2(n+1, -1), h1(n+1, -1), h2(n+1, -1);
  for (int i=0; i<n; i++) {
    int a, v, h; cin >> a >> v >> h;
    v1[a] = (~v1[a] ? min(v1[a], v) : v);
    v2[a] = (~v2[a] ? max(v2[a], v) : v);
    h1[a] = (~h1[a] ? min(h1[a], h) : h);
    h2[a] = (~h2[a] ? max(h2[a], h) : h);
  }

  int idx = 0; long long sz = 0;
  for (int i=1; i<=n; i++) {
    if (~v1[i] && calc(v1[i], v2[i], h1[i], h2[i]) > sz) {
      idx = i; sz = calc(v1[i], v2[i], h1[i], h2[i]);
    }
  }
  cout << idx << " " << sz;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}