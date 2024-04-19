#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

void solve(void) {
  int n, q; cin >> n >> q;
  vector<long long> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  while (q--) {
    int op; cin >> op;
    if (op == 1) {
      int a, b; cin >> a >> b; a--; b--;
      cout << accumulate(v.begin()+a, v.begin()+b+1, 0LL) << "\n";
      swap(v[a], v[b]);
    } else {
      int a, b, c, d; cin >> a >> b >> c >> d; a--; b--; c--; d--;
      cout << accumulate(v.begin()+a, v.begin()+b+1, 0LL) - accumulate(v.begin()+c, v.begin()+d+1, 0LL) << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}