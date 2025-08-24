#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k, q, m; cin >> n >> k >> q >> m;
  vector<int> v(k);
  for (int i=0; i<k; i++) cin >> v[i];
  sort(v.begin(), v.end());

  vector<int> p(n+3, 1); p[2] = 0;
  while (q--) {
    int x; cin >> x;
    if (binary_search(v.begin(), v.end(), x)) continue;
    for (int i=x; i<=n+2; i+=x) {
      if (binary_search(v.begin(), v.end(), i)) continue;
      p[i] = 0;
    }
  }

  for (int i=4; i<=n+2; i++) {
    p[i] += p[i-1];
  }

  while (m--) {
    int s, e; cin >> s >> e;
    cout << p[e] - p[s-1] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}