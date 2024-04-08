#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  for (int i=0; i<n; i++) {
    int k; cin >> k;
    for (int j=0; j<k; j++) {
      int x; cin >> x;
      pq.push({x, i});
    }
  }

  vector<int> b(m);
  for (int i=0; i<m; i++) cin >> b[i];
  sort(b.begin(), b.end());

  vector<int> c(n, 0);
  for (int i=0; i<m; i++) {
    while (!pq.empty() && pq.top().first < b[i]) pq.pop();
    if (pq.empty()) break;
    if (pq.top().first > b[i]) continue;
    c[pq.top().second]++;
    pq.pop();
  }

  for (int i=0; i<n; i++) {
    cout << c[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}