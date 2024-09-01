#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> o, e;
  while (n--) {
    int x; cin >> x;
    if (x & 1) o.push_back(x);
    else e.push_back(x);
  }
  sort(o.begin(), o.end());
  sort(e.begin(), e.end());

  int ans = 2e9+1;
  for (int i=1; i<o.size(); i++) {
    ans = min(ans, o[i] - o[i-1]);
  }
  for (int i=1; i<e.size(); i++) {
    ans = min(ans, e[i] - e[i-1]);
  }
  cout << (ans == 2e9+1 ? -1 : ans) << " ";

  ans = 2e9+1;
  for (int i=0, j=0; i<o.size() && j<e.size();) {
    if (o[i] < e[j]) ans = min(ans, e[j] - o[i++]);
    else ans = min(ans, o[i] - e[j++]);
  }
  cout << (ans == 2e9+1 ? -1 : ans);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}