#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int s; cin >> s;
  if (s % 4763) {
    cout << 0;
    return;
  }
  s /= 4763;

  vector<pair<int, int>> ans;
  for (int i=0; i<=s/508; i++) {
    if ((s-508*i) % 212) continue;
    int j = (s-508*i) / 212;
    if (i <= 200 && j <= 200) ans.push_back({i, j});
  }
  for (int i=0; i<=s/508; i++) {
    if ((s-508*i) % 305) continue;
    int j = (s-508*i) / 305;
    if (i <= 200 && j <= 200) ans.push_back({i, j});
  }
  for (int i=0; i<=s/108; i++) {
    if ((s-108*i) % 212) continue;
    int j = (s-108*i) / 212;
    if (i <= 200 && j <= 200) ans.push_back({i, j});
  }
  for (int i=0; i<=s/108; i++) {
    if ((s-108*i) % 305) continue;
    int j = (s-108*i) / 305;
    if (i <= 200 && j <= 200) ans.push_back({i, j});
  }
  sort(ans.begin(), ans.end());
  ans.erase(unique(ans.begin(), ans.end()), ans.end());

  cout << ans.size() << "\n";
  for (auto p : ans) {
    cout << p.first << " " << p.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}