#include <algorithm>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (int i=0; i<n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end());

  int ans = 0;
  stack<int> s;
  s.push(0);
  for (int i=0; i<n; i++) {
    if (s.top() < v[i].second) ans++, s.push(v[i].second);
    else {
      while (!s.empty() && s.top() > v[i].second) s.pop();
      if (s.top() < v[i].second) ans++, s.push(v[i].second);
    }
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}