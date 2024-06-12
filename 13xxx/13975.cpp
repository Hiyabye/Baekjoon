#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int k; cin >> k;
  priority_queue<long long, vector<long long>, greater<long long>> pq;
  while (k--) {
    long long x; cin >> x;
    pq.push(x);
  }

  long long ans = 0;
  while (pq.size() >= 2) {
    long long a = pq.top(); pq.pop();
    long long b = pq.top(); pq.pop();
    ans += a + b;
    pq.push(a + b);
  }
  cout << ans << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}