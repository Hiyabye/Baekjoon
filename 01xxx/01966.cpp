#include <iostream>
#include <queue>
#include <utility>
using namespace std;

void solve(void) {
  int n, m, x;
  cin >> n >> m;
  queue<pair<int, int> > q;
  priority_queue<int> pq;
  for (int i=0; i<n; i++) {
    cin >> x;
    q.push(make_pair(i, x));
    pq.push(x);
  }

  int ans = 0;
  while (!q.empty()) {
    pair<int, int> cur = q.front();
    q.pop();

    if (cur.second == pq.top()) {
      pq.pop();
      ans++;
      if (cur.first == m) break;
    } else {
      q.push(cur);
    }
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}