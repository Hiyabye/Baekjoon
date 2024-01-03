#include <iostream>
#include <vector>
using namespace std;

int solve(void) {
  int a, b; cin >> a >> b;
  int r; cin >> r;
  vector<vector<bool>> v(r, vector<bool>(r, false));
  v[a][b] = true;

  int ans = 0, x = a, y = b;
  while (true) {
    ans++;
    if (x + y + 2 < r) x++, y++;
    else x /= 2, y /= 2;
    if (v[x][y]) return ans;
    v[x][y] = true;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cout << solve();
  return 0;
}