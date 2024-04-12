#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n, w, l; cin >> n >> w >> l;
  queue<int> a, b;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    a.push(x);
  }

  int ans = w, cur = 0;
  while (!a.empty()) {
    if (b.size() >= w) {
      cur -= b.front(); b.pop();
    }
    if (cur + a.front() <= l) {
      int x = a.front(); a.pop();
      b.push(x);
      cur += x;
    } else {
      b.push(0);
    }
    ans++;
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}