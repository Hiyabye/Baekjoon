#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  int odd = 0, even = 0;
  for (int x : a) {
    if (x & 1) odd++;
    else even++;
  }

  if (odd & 1) return (even & 1) ? (odd != even) : (odd > even);
  else         return (even & 1) ? (even > odd) : false;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) cout << (solve() ? "amsminn" : "heeda0528") << "\n";
  return 0;
}