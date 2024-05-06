#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> dist(n+1, vector<int>(n+1, 1e9));
  int a, b; cin >> a >> b;
  while (a != -1 && b != -1) {
    dist[a][b] = dist[b][a] = 1;
    cin >> a >> b;
  }

  for (int i=1; i<=n; i++) dist[i][i] = 0;
  for (int k=1; k<=n; k++) for (int i=1; i<=n; i++) for (int j=1; j<=n; j++) {
    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
  }

  int max_score = 1e9; vector<int> ans;
  for (int i=1; i<=n; i++) {
    int score = 0;
    for (int j=1; j<=n; j++) {
      score = max(score, dist[i][j]);
    }
    if (score < max_score) {
      max_score = score;
      ans.clear();
      ans.push_back(i);
    } else if (score == max_score) {
      ans.push_back(i);
    }
  }

  cout << max_score << " " << ans.size() << "\n";
  for (int x : ans) cout << x << " ";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}