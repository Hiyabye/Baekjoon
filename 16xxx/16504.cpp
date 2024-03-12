#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> k(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> k[i][j];

  long long ans = 0;
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) ans += k[i][j];
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}