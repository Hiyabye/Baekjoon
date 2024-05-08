#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<bool> v(n, false);

  while (q--) {
    int l, i; cin >> l >> i; l--; i;
    for (int j=l; j<n; j+=i) v[j] = true;
  }
  cout << count(v.begin(), v.end(), false);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}