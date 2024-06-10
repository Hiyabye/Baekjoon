#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool solve(void) {
  int n; cin >> n;
  if (n == 0) return false;
  string s; cin >> s;

  vector<vector<char>> v(s.length()/n, vector<char>(n));
  for (int i=0; i<s.length()/n; i++) for (int j=0; j<n; j++) {
    v[i][j] = s[i*n + (i & 1 ? n-j-1 : j)];
  }

  for (int i=0; i<n; i++) for (int j=0; j<s.length()/n; j++) {
    cout << v[j][i];
  }
  cout << "\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}