#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;
  vector<vector<char>> v(n, vector<char>(n, ' '));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      if (i==0 || i==n-1 || j==0 || j==n-1) v[i][j] = '*';
    }
    v[i][i] = v[i][n-i-1] = '*';

  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}