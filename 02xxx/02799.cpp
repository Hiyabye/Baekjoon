#include <iostream>
#include <string>
#include <vector>
using namespace std;

int calc(const vector<string> &v, int x, int y) {
  int cnt = 0;
  for (int i=0; i<5; i++) {
    if (v[5*x+i][5*y+1] == '*') {
      cnt++;
    }
  }
  return cnt;
}

void solve(void) {
  int m, n; cin >> m >> n;
  vector<string> v(5*m+1);
  for (int i=0; i<5*m+1; i++) cin >> v[i];

  vector<int> ans(5, 0);
  for (int i=0; i<m; i++) {
    for (int j=0; j<n; j++) {
      ans[calc(v, i, j)]++;
    }
  }

  for (int i=0; i<5; i++) {
    cout << ans[i] << " ";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}