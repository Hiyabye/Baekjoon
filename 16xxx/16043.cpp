#include <iostream>
#include <queue>
#include <unordered_set>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<int> g(m);
  for (int i=0; i<m; i++) cin >> g[i];

  unordered_set<int> s(g.begin(), g.end());
  priority_queue<int, vector<int>, greater<int>> pq;
  for (int i=1; i<=n; i++) {
    if (s.find(i) == s.end()) pq.push(i);
  }

  for (int i=0; i<m; i++) {
    while (!pq.empty() && pq.top() < g[i]) {
      cout << pq.top() << "\n"; pq.pop();
    }
    cout << g[i] << "\n";
  }
  while (!pq.empty()) {
    cout << pq.top() << "\n"; pq.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}