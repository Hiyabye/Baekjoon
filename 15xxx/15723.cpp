#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<bool>> dist(26, vector<bool>(26, false));
  while (n--) {
    char a, b; string c; cin >> a >> c >> b;
    dist[a-'a'][b-'a'] = true;
  }

  for (int k=0; k<26; k++) for (int i=0; i<26; i++) for (int j=0; j<26; j++) {
    dist[i][j] = dist[i][j] || (dist[i][k] && dist[k][j]);
  }

  int m; cin >> m;
  while (m--) {
    char a, b; string c; cin >> a >> c >> b;
    cout << (dist[a-'a'][b-'a'] ? 'T' : 'F') << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}