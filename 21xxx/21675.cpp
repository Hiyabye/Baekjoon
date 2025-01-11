#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int w, h; cin >> w >> h;
  vector<vector<char>> s(h, vector<char>(w)), t(h, vector<char>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> s[i][j];
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> t[i][j];
  char a, b, c, d; cin >> a >> b >> c >> d;

  for (int i=0; i<h; i++) {
    for (int j=0; j<w; j++) {
      cout << (s[i][j] == '0' ? (t[i][j] == '0' ? a : b) : (t[i][j] == '0' ? c : d));
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}