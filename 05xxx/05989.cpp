#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int x, y, i; cin >> x >> y >> i;
  vector<vector<bool>> v(x+1, vector<bool>(y+1, false));
  while (i--) {
    int xii, yii, xur, yur; cin >> xii >> yii >> xur >> yur;
    for (int j=xii; j<=xur; j++) for (int k=yii; k<=yur; k++) {
      v[j][k] = true;
    }
  }

  int ans = 0;
  for (int j=1; j<=x; j++) for (int k=1; k<=y; k++) {
    ans += v[j][k];
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}