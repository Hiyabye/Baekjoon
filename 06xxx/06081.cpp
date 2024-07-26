#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> p(n+1, 0);
  for (int i=1; i<=n; i++) {
    int h; cin >> h;
    p[i] = p[i-1] + h;
  }

  while (q--) {
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