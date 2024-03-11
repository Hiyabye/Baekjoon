#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, a, b; cin >> n >> a >> b; a--; b--;
  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) {
    if (v[a][i] > v[a][b] || v[i][b] > v[a][b]) return false;
  }
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  cout << (solve() ? "HAPPY" : "ANGRY");
  return 0;
}