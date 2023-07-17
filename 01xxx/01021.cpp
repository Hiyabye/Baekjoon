#include <bits/stdc++.h>

using namespace std;

void solve(void) {
  int n, m;
  cin >> n >> m;
  deque<int> dq;
  for (int i=1; i<=n; i++) {
    dq.push_back(i);
  }
  vector<int> a(m);
  for (int i=0; i<m; i++) {
    cin >> a[i];
  }

  int ans = 0;
  for (int i=0; i<m; i++) {
    int idx = find(dq.begin(), dq.end(), a[i]) - dq.begin();
    if (idx > dq.size() / 2) {
      while (dq.front() != a[i]) {
        dq.push_front(dq.back());
        dq.pop_back();
        ans++;
      }
    } else {
      while (dq.front() != a[i]) {
        dq.push_back(dq.front());
        dq.pop_front();
        ans++;
      }
    }
    dq.pop_front();
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}