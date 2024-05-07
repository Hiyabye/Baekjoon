#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  cin.ignore();
  vector<vector<bool>> adj(52, vector<bool>(52, false));
  while (n--) {
    string s; getline(cin, s);
    int u = s[0] - (s[0] <= 'Z' ? 'A' : 'a'-26);
    int v = s[5] - (s[5] <= 'Z' ? 'A' : 'a'-26);
    adj[u][v] = true;
  }

  for (int i=0; i<52; i++) adj[i][i] = true;
  for (int k=0; k<52; k++) for (int i=0; i<52; i++) for (int j=0; j<52; j++) {
    adj[i][j] = adj[i][j] || (adj[i][k] && adj[k][j]);
  }

  vector<pair<char, char>> ans;
  for (int i=0; i<52; i++) for (int j=0; j<52; j++) {
    if (i == j) continue;
    if (adj[i][j]) {
      char u = i + (i < 26 ? 'A' : 'a'-26);
      char v = j + (j < 26 ? 'A' : 'a'-26);
      ans.push_back({u, v});
    }
  }

  cout << ans.size() << "\n";
  for (auto p : ans) {
    cout << p.first << " => " << p.second << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}