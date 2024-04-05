#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  int d = v[0];
  for (int i=1; i<n; i++) {
    if (v[i] % d) continue;
    cout << v[i++] << "\n";
    if (i < n) d = v[i];
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}