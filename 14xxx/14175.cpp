#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int m, n, k; cin >> m >> n >> k;
  vector<vector<char>> v(m, vector<char>(n));
  for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  for (int i=0; i<m; i++) {
    for (int l=0; l<k; l++) {
      for (int j=0; j<n; j++) {
        for (int p=0; p<k; p++) {
          cout << v[i][j];
        }
      }
      cout << "\n";
    }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}