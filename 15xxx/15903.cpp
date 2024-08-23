#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  priority_queue<long long, vector<long long>, greater<long long>> pq;
  while (n--) {
    long long a; cin >> a;
    pq.push(a);
  }

  while (m--) {
    long long a = pq.top(); pq.pop();
    long long b = pq.top(); pq.pop();
    pq.push(a + b);
    pq.push(a + b);
  }

  long long ans = 0;
  while (!pq.empty()) {
    ans += pq.top();
    pq.pop();
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}