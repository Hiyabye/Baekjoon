#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;

  vector<int> v;
  for (int i=1; i<=n; i++) {
    int x; cin >> x;
    while (x--) v.push_back(i);
  }

  while (q--) {
    int x; cin >> x;
    cout << v[x] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}