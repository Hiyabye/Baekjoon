#include <iostream>
#include <vector>
using namespace std;

bool solve(void) {
  int n, d; cin >> n >> d;
  if (n == 0 && d == 0) return false;
  vector<vector<int>> v(d, vector<int>(n));
  for (int i=0; i<d; i++) for (int j=0; j<n; j++) cin >> v[i][j];

  for (int i=0; i<n; i++) {
    bool flag = true;
    for (int j=0; j<d; j++) {
      if (v[j][i] == 0) {
        flag = false;
        break;
      }
    }
    if (flag) {
      cout << "yes\n";
      return true;
    }
  }
  cout << "no\n";
  return true;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  while (solve());
  return 0;
}