#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n; cin >> n;

  vector<vector<int>> v(n, vector<int>(n));
  for (int i=0; i<n*n; i++) {
    v[i/n][i%n] = i+1;
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << (i & 1 ? v[i][n-j-1] : v[i][j]) << " ";
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