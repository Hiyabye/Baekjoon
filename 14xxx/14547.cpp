#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  string a; cin >> a;
  if (a == "#") return false;
  string b, c; cin >> b >> c;

  vector<int> ans;
  for (int i=1; i<4; i++) {
    if (b[i] == b[i-1]) ans.push_back(b[i] - '0');
  }
  if (ans.empty()) return true;
  sort(ans.begin(), ans.end());

  cout << ans[0] << " " << ans[0] << " glued";
  for (int i=1; i<ans.size(); i++) {
    if (ans[i] == ans[i-1]) continue;
    cout << " and " << ans[i] << " " << ans[i] << " glued";
  }
  cout << "\n";

  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}