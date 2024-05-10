#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n, l, k; cin >> n >> l >> k;

  priority_queue<int> pq;
  while (n--) {
    int sub1, sub2; cin >> sub1 >> sub2;
    if (sub2 <= l) pq.push(140);
    else if (sub1 <= l) pq.push(100);
  }

  int ans = 0;
  while (k-- && !pq.empty()) {
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