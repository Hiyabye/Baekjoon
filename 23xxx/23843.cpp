#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  priority_queue<int> t;
  while (n--) {
    int x; cin >> x;
    t.push(x);
  }

  vector<int> ans(m, 0);
  while (!t.empty()) {
    auto it = min_element(ans.begin(), ans.end());
    *it += t.top(); t.pop();
  }
  cout << *max_element(ans.begin(), ans.end());
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}