#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;
  int n = sqrt(s.size());

  vector<vector<char> > v(n, vector<char>(n));
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      v[i][j] = s[i*n+j];
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      cout << v[j][n-i-1];
    }
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}