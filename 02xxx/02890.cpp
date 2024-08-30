#include <iostream>
#include <vector>
using namespace std;

void solve(void) {
  int r, c; cin >> r >> c;
  vector<vector<char>> v(r, vector<char>(c));
  for (int i=0; i<r; i++) for (int j=0; j<c; j++) cin >> v[i][j];

  vector<int> ans(10, 0);
  for (int i=c-1, k=1; i>=0; i--) {
    bool flag = false;
    for (int j=0; j<r; j++) {
      if (v[j][i] < '1' || v[j][i] > '9' || ans[v[j][i]-'0']) continue;
      ans[v[j][i]-'0'] = k;
      flag = true;
    }
    if (flag) k++;
  }

  for (int i=1; i<=9; i++) {
    cout << ans[i] << "\n";
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}