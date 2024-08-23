#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void solve(void) {
  int n, m, k; cin >> n >> m >> k;
  priority_queue<int> pq;
  while (n--) {
    int d; cin >> d;
    pq.push(d);
  }

  vector<int> ans;
  while (!pq.empty()) {
    int cur = pq.top(); pq.pop();
    ans.push_back(cur);
    if (cur - m > k) pq.push(cur - m);
  }

  cout << ans.size() << "\n" << ans[0] << "\n";
  for (int i=1; i<ans.size(); i++) {
    ans[i] += ans[i-1] / 2;
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}