#include <iostream>
#include <queue>
using namespace std;

void solve(void) {
  int n; cin >> n;
  queue<int> q;
  for (int i=1; i<=n; i++) q.push(i);

  while (!q.empty()) {
    int x = q.front(); q.pop();
    cout << x << " ";
    if (q.empty()) break;
    q.push(q.front()); q.pop();
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}