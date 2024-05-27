#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n; cin >> n;
  int a; cin >> a;

  if (n == 1) {
    cout << 0;
    return;
  }

  priority_queue<int> pq;
  for (int i=1; i<n; i++) {
    int x; cin >> x;
    pq.push(x);
  }

  int ans = 0;
  while (pq.top() >= a) {
    int x = pq.top();
    pq.pop();
    pq.push(x-1);
    a++;
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