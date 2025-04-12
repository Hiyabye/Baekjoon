#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<char>> v(2, vector<char>(n));
  for (int i=0; i<2; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) {
    if (v[0][i] != '\\') continue;
    if (i+4 < n && v[0][i+4] == '\\') {
      cout << 'w';
      i += 4;
    } else {
      cout << 'v';
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}