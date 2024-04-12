#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  vector<bool> v(n+1, true);
  for (int i=0; i<m+k; i++) {
    int x; cin >> x;
    v[x] = false;
  }

  cout << n-m-k << "\n";
  for (int i=1; i<=n; i++) {
    if (v[i]) cout << i << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}