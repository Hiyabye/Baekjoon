#include <algorithm>
#include <iostream>
#include <stack>
#include <unordered_set>
using namespace std;

void solve(void) {
  int n, e; cin >> n >> e;
  unordered_set<int> us;
  for (int i=1; i<=n; i++) us.insert(i);

  stack<int> s;
  while (e--) {
    int x; cin >> x;
    s.push(x);
  }

  while (!s.empty() && us.size() > 1) {
    if (us.find(s.top()) != us.end()) us.erase(s.top());
    s.pop();
  }

  int ans = 0;
  for (int x : us) ans = max(ans, x);
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}