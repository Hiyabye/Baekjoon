#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> v(2, vector<int>(3));

inline int calc(int n, int m, int prev) {
  if (n == 0) return m <= 0;
  int ret = 0;
  for (int i=0; i<2; i++) for (int j=0; j<3; j++) {
    if (prev == j) ret += calc(n-1, m-v[i][j]/2, j);
    else ret += calc(n-1, m-v[i][j], j);
  }
  return ret;
}

void solve(void) {
  int n, m; cin >> n >> m;
  for (int i=0; i<2; i++) for (int j=0; j<3; j++) cin >> v[i][j];

  cout << calc(n, m, -1);
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}