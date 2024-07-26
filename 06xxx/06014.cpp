#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<int> v;
  for (int i=1; i<=n; i++) {
    int b; cin >> b;
    while (b--) v.push_back(i);
  }

  while (q--) {
    int t; cin >> t;
    cout << v[t] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}