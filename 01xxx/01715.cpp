#include <bits/stdc++.h>
using namespace std;

void solve(void) {
  int n; cin >> n;
  priority_queue<int, vector<int>, greater<int> > pq;
  for (int i=0; i<n; i++) {
    int x; cin >> x;
    pq.push(x);
  }

  int ans = 0;
  for (int i=0; i<n-1; i++) {
    int a = pq.top(); pq.pop();
    int b = pq.top(); pq.pop();
    ans += a + b;
    pq.push(a + b);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}