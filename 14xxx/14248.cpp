#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void dfs(int cur, int n, vector<int> &a, vector<bool> &visited) {
  visited[cur] = true;
  if (cur - a[cur] >= 1 && !visited[cur-a[cur]]) dfs(cur-a[cur], n, a, visited);
  if (cur + a[cur] <= n && !visited[cur+a[cur]]) dfs(cur+a[cur], n, a, visited);
}

void solve(void) {
  int n; cin >> n;
  vector<int> a(n+1);
  for (int i=1; i<=n; i++) cin >> a[i];
  int s; cin >> s;

  vector<bool> visited(n+1, false);
  dfs(s, n, a, visited);
  cout << count(visited.begin(), visited.end(), true);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}