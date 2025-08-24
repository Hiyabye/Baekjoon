#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, h, w; cin >> n >> h >> w;
  vector<vector<char>> v(h, vector<char>(n*w));
  for (int i=0; i<h; i++) for (int j=0; j<n*w; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) {
    char c = '?';
    for (int j=0; j<h; j++) for (int k=0; k<w; k++) {
      if (v[j][i*w+k] == '?') continue;
      c = v[j][i*w+k];
    }
    cout << c;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}