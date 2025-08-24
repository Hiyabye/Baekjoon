#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(2*n-1, vector<int>(n));
  for (int i=0; i<2*n-1; i++) for (int j=0; j<n-1+(i&1); j++) cin >> v[i][j];

  cout << 2*n-2 << " " << 2*n-3;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}