#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  while (m--) {
    int l, h; cin >> l >> h; l--; h--;
    if (a[h] == *max_element(a.begin(), a.end())) continue;
    a[l]--;
  }

  for (int i=0; i<n; i++) {
    cout << a[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}