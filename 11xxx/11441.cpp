#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=1; i<n; i++) {
    a[i] += a[i-1];
  }

  int m; cin >> m;
  while (m--) {
    int i, j; cin >> i >> j;
    i--; j--;
    cout << (i == 0 ? a[j] : a[j] - a[i-1]) << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}