#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n, k; cin >> n >> k;
  priority_queue<int> a, b;
  while (n--) {
    int x; cin >> x;
    if (x > 0) a.push(x);
    else b.push(-x);
  }

  long long ans = 0;
  while (!a.empty()) {
    ans += a.top() * 2;
    for (int i=0; i<k && !a.empty(); i++) a.pop();
  }
  while (!b.empty()) {
    ans += b.top() * 2;
    for (int i=0; i<k && !b.empty(); i++) b.pop();
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}