#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;

  vector<vector<int>> cnt(2, vector<int>(7, 0));
  while (n--) {
    int s, y; cin >> s >> y;
    cnt[s][y]++;
  }

  int ans = 0;
  ans += (cnt[0][1] + cnt[1][1] + cnt[0][2] + cnt[1][2] + k - 1) / k;
  ans += (cnt[0][3] + cnt[0][4] + k - 1) / k;
  ans += (cnt[1][3] + cnt[1][4] + k - 1) / k;
  ans += (cnt[0][5] + cnt[0][6] + k - 1) / k;
  ans += (cnt[1][5] + cnt[1][6] + k - 1) / k;
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}