#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char>> a(n, vector<char>(m));
  for (int i=0; i<n; i++) for (int j=0; j<m; j++) cin >> a[i][j];

  vector<vector<char>> b = a;
  for (int i=0; i<n-1; i++) for (int j=0; j<m-1; j++) {
    if (a[i][j] != '#') continue;
    b[i][j] = b[i][j+1] = b[i+1][j] = b[i+1][j+1] = '#';
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) cout << b[i][j];
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}