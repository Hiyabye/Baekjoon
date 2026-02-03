#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(3));
  for (int i=0; i<n; i++) for (int j=0; j<3; j++) cin >> v[i][j];
  for (int i=0; i<n; i++) sort(v[i].begin(), v[i].end());

  int a = 1e9, b = 1e9, c = 1e9;
  for (int i=0; i<n; i++) {
    a = min(a, v[i][0]);
    b = min(b, v[i][1]);
    c = min(c, v[i][2]);
  }
  cout << a * b * c;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}