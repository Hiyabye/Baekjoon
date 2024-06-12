#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<int> v[1001];
  while (n--) {
    int d, w; cin >> d >> w;
    v[d].push_back(w);
  }

  int ans = 0;
  priority_queue<int> pq;
  for (int i=1000; i>=1; i--) {
    for (int x : v[i]) pq.push(x);
    if (pq.empty()) continue;
    ans += pq.top(); pq.pop();
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}