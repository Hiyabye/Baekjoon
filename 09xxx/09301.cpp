#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(int idx) {
  int n; cin >> n;
  int m; cin >> m;

  vector<vector<char>> v(n, vector<char>(n, '.'));
  while (m--) {
    string s; int x, y, w, h; char c;
    cin >> s >> x >> y >> w >> h >> c; x--; y--;
    if (s == "Filled") {
      for (int i=n-y-1; i>=n-y-h; i--) for (int j=x; j<x+w; j++) v[i][j] = c;
    } else {
      for (int i=n-y-1; i>=n-y-h; i--) v[i][x] = v[i][x+w-1] = c;
      for (int i=x; i<x+w; i++) v[n-y-1][i] = v[n-y-h][i] = c;
    }
  }

  cout << "Case " << idx << ":\n";
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  for (int i=1; i<=t; i++) solve(i);
  return 0;
}