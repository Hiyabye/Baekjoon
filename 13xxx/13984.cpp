#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  vector<long long> t(n);
  for (int i=0; i<n; i++) cin >> t[i];

  priority_queue<long long, vector<long long>, greater<long long>> pq;
  for (int i=0; i<k; i++) pq.push(t[i]);

  long long ans = 0, cur = 0;
  for (int i=k; i<n; i++) {
    cur += pq.top(); pq.pop();
    ans += cur;
    pq.push(t[i]);
  }

  while (!pq.empty()) {
    cur += pq.top(); pq.pop();
    ans += cur;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}