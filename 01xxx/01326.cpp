#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void calc(int n, int cur, int delta, vector<int> &ans, queue<int> &q) {
  for (int i=cur-delta; i>=1; i-=delta) {
    if (ans[i] > ans[cur]+1) ans[i] = ans[cur]+1, q.push(i);
  }
  for (int i=cur+delta; i<=n; i+=delta) {
    if (ans[i] > ans[cur]+1) ans[i] = ans[cur]+1, q.push(i);
  }
}

void solve(void) {
  int n; cin >> n;
  vector<int> v(n+1, 0);
  for (int i=1; i<=n; i++) cin >> v[i];
  int a, b; cin >> a >> b;

  vector<int> ans(n+1, 1e9); ans[a] = 0;
  queue<int> q; q.push(a);
  calc(n, a, v[a], ans, q);
  
  while (!q.empty()) {
    int cur = q.front(); q.pop();
    calc(n, cur, v[cur], ans, q);
  }
  cout << (ans[b] == 1e9 ? -1 : ans[b]);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}