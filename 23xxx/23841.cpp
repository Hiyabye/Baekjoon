#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int n, m; cin >> n >> m;
  vector<vector<char> > v(n, vector<char>(m));
  for (int i=0; i<n; i++) {
    string s; cin >> s;
    for (int j=0; j<m; j++) {
      v[i][j] = s[j];
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m/2; j++) {
      if (v[i][j] == '.' && v[i][m-j-1] == '.') continue;
      if (v[i][j] != '.') v[i][m-j-1] = v[i][j];
      else v[i][j] = v[i][m-j-1];
    }
  }

  for (int i=0; i<n; i++) {
    for (int j=0; j<m; j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr); cout.tie(nullptr);

  solve();
  return 0;
}