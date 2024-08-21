#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;

  vector<bool> v(n+1, false);
  while (m--) {
    int op, s, e; cin >> op >> s >> e;
    if (op == 0) {
      for (int i=s; i<=e; i++) v[i] = !v[i];
    } else if (op == 1) {
      cout << count(v.begin()+s, v.begin()+e+1, true) << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}