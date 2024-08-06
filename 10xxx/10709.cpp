#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int h, w; cin >> h >> w;
  vector<vector<char>> v(h, vector<char>(w));
  for (int i=0; i<h; i++) for (int j=0; j<w; j++) cin >> v[i][j];

  for (int i=0; i<h; i++) {
    int cur = -1;
    for (int j=0; j<w; j++) {
      if (v[i][j] == 'c') cur = 0;
      cout << (cur != -1 ? cur++ : -1) << " ";
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