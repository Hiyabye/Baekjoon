#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<pair<int, int>> a(n);
  for (int i=0; i<n; i++) cin >> a[i].first >> a[i].second;
  vector<int> b(k);
  for (int i=0; i<k; i++) cin >> b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  long long ans = 0;
  priority_queue<int> pq;
  for (int i=0, j=0; i<k; i++) {
    while (j < n && a[j].first <= b[i]) pq.push(a[j++].second);
    if (!pq.empty()) ans += pq.top(), pq.pop();
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}