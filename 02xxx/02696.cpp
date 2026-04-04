#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int m; cin >> m;
  vector<int> v(m);
  for (int i=0; i<m; i++) cin >> v[i];
  if (m == 1) {
    cout << "1\n" << v[0] << "\n";
    return;
  }

  vector<int> ans(1, v[0]);
  sort(v.begin(), v.begin() + 3);
  ans.push_back(v[1]);

  int mid = v[1];
  priority_queue<int> l; l.push(v[0]);
  priority_queue<int, vector<int>, greater<int>> r; r.push(v[2]);
  for (int i=3; i<m; i++) {
    if (v[i] > mid) r.push(v[i]);
    else            l.push(v[i]);
    if (i & 1) continue;
    if (l.size() == r.size()) {
      ans.push_back(mid);
      continue;
    }

    int a, b, c = mid;
    if (l.size() > r.size()) {
      a = l.top(); l.pop();
      b = l.top(); l.pop();
    } else {
      a = r.top(); r.pop();
      b = r.top(); r.pop();
    }
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    l.push(a); mid = b; r.push(c);
    ans.push_back(mid);
  }

  cout << ans.size();
  for (int i=0; i<ans.size(); i++) {
    if (i % 10 == 0) cout << "\n";
    cout << ans[i] << " ";
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}