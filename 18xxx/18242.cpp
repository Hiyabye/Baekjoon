#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

pair<int, int> find1(int n, int m, const vector<vector<char>> &v) {
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) {
    if (v[i][j] == '#') return {i, j};
  }
  return {-1, -1};
}

pair<int, int> find2(int n, int m, const vector<vector<char>> &v) {
  for (int i=n-1; i>=0; i--) for (int j=m-1; j>=0; j--) {
    if (v[i][j] == '#') return {i, j};
  }
  return {-1, -1};
}

string solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> v(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  pair<int, int> tl = find1(n, m, v), br = find2(n, m, v);
  for (int y=tl.first; y<=br.first; y++) {
    if (v[y][tl.second] == '.') return "LEFT";
    if (v[y][br.second] == '.') return "RIGHT";
  }
  for (int x=tl.second; x<=br.second; x++) {
    if (v[tl.first][x] == '.') return "UP";
    if (v[br.first][x] == '.') return "DOWN";
  }
  return "NO";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << solve();
  return 0;
}