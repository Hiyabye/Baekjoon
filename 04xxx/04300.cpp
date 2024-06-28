#include <iostream>
#include <vector>
using namespace std;

bool check(vector<vector<int>>& v) {
  bool flag;
  for (int i=0; i<5; i++) {
    flag = true;
    for (int j=0; j<5; j++) if (v[i][j]) { flag = false; break; }
    if (flag) return true;
    flag = true;
    for (int j=0; j<5; j++) if (v[j][i]) { flag = false; break; }
    if (flag) return true;
  }
  flag = true;
  for (int i=0; i<5; i++) if (v[i][i]) { flag = false; break; }
  if (flag) return true;
  flag = true;
  for (int i=0; i<5; i++) if (v[i][4-i]) { flag = false; break; }
  return flag;
}

void solve(void) {
  vector<vector<int>> v(5, vector<int>(5, 0));
  for (int i=0; i<2; i++) for (int j=0; j<5; j++) cin >> v[i][j];
  for (int i=0; i<5; i++) if (i != 2) cin >> v[2][i];
  for (int i=3; i<5; i++) for (int j=0; j<5; j++) cin >> v[i][j];

  vector<int> call(75);
  for (int i=0; i<75; i++) cin >> call[i];

  for (int i=0; i<75; i++) {
    for (int j=0; j<5; j++) for (int k=0; k<5; k++) if (v[j][k] == call[i]) v[j][k] = 0;
    if (check(v)) { cout << "BINGO after " << i+1 << " numbers announced\n"; return; }
  }
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  while (n--) solve();
  return 0;
}