#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dfs(vector<vector<bool> > &p, vector<bool> &visited, int cur) {
  visited[cur] = true;
  cout << cur << " ";
  
  for (int i=1; i<p.size(); i++) {
    if (p[cur][i] && !visited[i]) {
      dfs(p, visited, i);
    }
  }
}

void bfs(vector<vector<bool> > &p, vector<bool> &visited, int cur) {
  queue<int> q;
  q.push(cur);
  visited[cur] = true;

  while (!q.empty()) {
    cur = q.front();
    q.pop();
    cout << cur << " ";

    for (int i=1; i<p.size(); i++) {
      if (p[cur][i] && !visited[i]) {
        q.push(i);
        visited[i] = true;
      }
    }
  }
}

void solve(void) {
  int n, m, v, x, y;
  cin >> n >> m >> v;
  vector<vector<bool> > p(n+1, vector<bool>(n+1, false));
  for (int i=0; i<m; i++) {
    cin >> x >> y;
    p[x][y] = p[y][x] = true;
  }

  vector<bool> visited(n+1, false);
  dfs(p, visited, v);
  cout << "\n";

  fill(visited.begin(), visited.end(), false);
  bfs(p, visited, v);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}