#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int m; cin >> m;
  for (int i=0; i<m; i++) {
    int l, r; cin >> l >> r;
    for (int j=l-1; j<r; j++) cout << v[j] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}