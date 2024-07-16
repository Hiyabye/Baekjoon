#include <iostream>
#include <vector>
using namespace std;

bool check(int m, const vector<vector<int>> &v) {
  int sum = 0;
  for (int i=0; i<m; i++) sum += v[0][i];
  for (int i=0; i<m; i++) {
    int cur = 0;
    for (int j=0; j<m; j++) cur += v[i][j];
    if (cur != sum) return false;
  }
  for (int i=0; i<m; i++) {
    int cur = 0;
    for (int j=0; j<m; j++) cur += v[j][i];
    if (cur != sum) return false;
  }
  int cur = 0;
  for (int i=0; i<m; i++) cur += v[i][i];
  if (cur != sum) return false;
  cur = 0;
  for (int i=0; i<m; i++) cur += v[i][m-i-1];
  if (cur != sum) return false;
  return true;
}

void solve(void) {
  int m; cin >> m;
  vector<vector<int>> v(m, vector<int>(m));
  for (int i=0; i<m; i++) for (int j=0; j<m; j++) cin >> v[i][j];

  if (check(m, v)) cout << "Magic square of size " << m << "\n";
  else cout << "Not a magic square\n";
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}