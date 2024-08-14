#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int m = 1;
  while (m * m < s.length()) m++;
  while (s.length() < m * m) s += '*';

  vector<vector<char>> v(m, vector<char>(m));
  for (int i=0; i<m; i++) for (int j=0; j<m; j++) {
    v[i][j] = s[i*m+j];
  }

  for (int i=0; i<m; i++) for (int j=0; j<m; j++) {
    if (v[m-j-1][i] == '*') continue;
    cout << v[m-j-1][i];
  }
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}