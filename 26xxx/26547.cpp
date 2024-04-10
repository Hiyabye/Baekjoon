#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve(void) {
  string s; cin >> s;

  int k = s.length();
  vector<vector<char>> v(k, vector<char>(k, ' '));
  for (int i=0; i<k; i++) v[0][i] = s[i];
  for (int i=0; i<k; i++) v[i][0] = s[i];
  for (int i=0; i<k; i++) v[k-1][i] = s[k-i-1];
  for (int i=0; i<k; i++) v[i][k-1] = s[k-i-1];

  for (int i=0; i<k; i++) {
    for (int j=0; j<k; j++) {
      cout << v[i][j];
    }
    cout << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}