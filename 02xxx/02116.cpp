#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

inline int oppo(int x) {
  if (x == 0) return 5;
  if (x == 1) return 3;
  if (x == 2) return 4;
  if (x == 3) return 1;
  if (x == 4) return 2;
  return 0;
}

inline int calc(const vector<int> &v, int idx) {
  int ret = 0;
  for (int i=0; i<6; i++) {
    if (i == idx || i == oppo(idx)) continue;
    ret = max(ret, v[i]);
  }
  return ret;
}

void solve(void) {
  int n; cin >> n;
  vector<vector<int>> v(n, vector<int>(6));
  for (int i=0; i<n; i++) for (int j=0; j<6; j++) cin >> v[i][j];

  int ans = 0;
  for (int i=0; i<6; i++) {
    int cur = calc(v[0], i), dice = v[0][oppo(i)];
    for (int j=1; j<n; j++) {
      for (int k=0; k<6; k++) {
        if (v[j][k] == dice) {
          cur += calc(v[j], k);
          dice = v[j][oppo(k)];
          break;
        }
      }
    }
    ans = max(ans, cur);
  }
  cout << ans;
}

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  solve();
  return 0;
}