#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, l; cin >> n >> l;
  vector<string> v(n);
  for (int i=0; i<n; i++) cin >> v[i];

  pair<int, int> ans = {0, 0};
  for (int i=0; i<n; i++) {
    int cnt = v[i][0] == '1';
    for (int j=1; j<l; j++) {
      if (v[i][j-1] == '0' && v[i][j] == '1') cnt++;
    }
    if (ans.first < cnt) ans.first = cnt, ans.second = 1;
    else if (ans.first == cnt) ans.second++;
  }
  cout << ans.first << " " << ans.second;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}