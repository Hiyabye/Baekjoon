#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  for (int i=0; i<n; i++) cin >> a[i];

  for (int i=1; i<=m; i++) {
    for (int j=1; j<n; j++) {
      if (a[j-1] % i > a[j] % i) {
        swap(a[j-1], a[j]);
      }
    }
  }

  for (int i=0; i<n; i++) {
    cout << a[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}