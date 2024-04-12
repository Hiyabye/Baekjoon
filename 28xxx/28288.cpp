#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  vector<vector<int>> ans(n+1);
  for (int i=0; i<5; i++) {
    int cnt = 0;
    for (int j=0; j<n; j++) {
      if (v[j][i] == 'Y') cnt++;
    }
    ans[cnt].push_back(i);
  }

  for (int i=n; i>=0; i--) {
    if (ans[i].empty()) continue;
    cout << ans[i][0] + 1;
    for (int j=1; j<ans[i].size(); j++) cout << "," << ans[i][j] + 1;
    break;
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}